#include<iostream>
using namespace std;

void pattern1(int n){
        for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        for(int j=0;j<i*2;j++){
            cout<<" ";
        }
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}

void invertedPattern(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        for(int j=0;j<2*n -(i*2+2);j++){
            cout<<" ";
        }  
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n = 5;
    pattern1(n);
    invertedPattern(n);
    return 0;
}