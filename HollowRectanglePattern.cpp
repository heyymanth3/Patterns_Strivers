#include<iostream>
using namespace std;

void pattern1(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if((i>1 && i<n) && (j>1 && j<n)){
                cout<<" ";
            }else{
            cout<<"*";
            }
        }
        cout<<"\n";
    }
}
int main(){
    int n =4;
    pattern1(n);
    return 0;
}