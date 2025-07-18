#include<iostream>
using namespace std;

void pattern1(int n){
    int start = 1;
    for(int i=0;i<n;i++){
        
        if(i%2==0){
            start = 1;
        }else{
            start = 0;
        }
        for(int j=0;j<i+1;j++){
            cout<<start;
            start = 1-start;
        }
        cout<<"\n";
    }
}
int main(){
    int n = 5;
    pattern1(n);
    return 0;
}