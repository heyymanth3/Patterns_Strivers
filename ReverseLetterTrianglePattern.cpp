#include<iostream>
using namespace std;
int main(){
    int n= 5;
    char one = 'A';
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<one;
            one++;
        }
        one = 'A';
        cout<<endl;
    }
    return 0;
}