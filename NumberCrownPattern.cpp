#include<iostream>
using namespace std;

void pattern1(int n){
    for (int i=1;i<=n;i++){
        for(int j=1;j<i+1;j++){
            cout<<j;
        }
        for(int j=0;j<2*n-(2*i);j++){
            cout<<" ";
        }
        
        for(int j=i;j>0;j--){
            cout<<j;
        }
        cout<<"\n";
    }
}
int main(){
    int n = 5;
    pattern1(n);
    return 0;
}