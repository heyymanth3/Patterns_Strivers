#include<iostream>
using namespace std;

void pattern1(int n){
        for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        
        for(int j=1;j<=i*2+1;j++){
            cout<<"*";
        }

        cout<<"\n";
    }
}

void invertedPattern1(int n){
    for(int i=0;i<n;i++){
        
        for(int j=0;j<i;j++){
            cout<<" ";
        } 
        for(int j=0;j<2*n - (i*2+1);j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    
}
int main(){
    int n = 5;
    pattern1(n);
    invertedPattern1(n);
    return 0;
}