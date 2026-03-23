#include<iostream>
using namespace std;
void print1(int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void print2(int n){
    for(int i = 1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void print3(int n){
    for (int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        cout<<endl;
    }
}
void print4(int n){
    for(int i=1; i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}
int main(){
    int n = 5;
    print4(n);
    return 0;
}