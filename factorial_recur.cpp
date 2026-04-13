#include<iostream>
using namespace std;

int factorial(int n){
    if(n == 1){return 1;}
    else return n*factorial(n-1);
}

int main(){
    int n;
    cout<<"\nEnter the number to find the factorial:";
    cin>>n;
    cout<<factorial(n);
    return 0;
}