#include<iostream>
using namespace std;

void pattern1(int n){
    int spaces = 2*n-2;
    for(int i=1;i<=2*n-1;i++){
        int stars = i;
        if(i>n){
            stars = 2*n-i;
        }
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        
        for(int j=0;j<spaces;j++){
            cout<<" ";
        }
        
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<"\n";
        
        if(i<n){
            spaces = spaces - 2;
        }else{
            spaces = spaces + 2;
        }
    }
}
int main(){
    int n = 5;
    pattern1(n);
    return 0;
}