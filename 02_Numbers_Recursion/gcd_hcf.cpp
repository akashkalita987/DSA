#include<iostream>
#include<algorithm>
using namespace std;

int gcd(int a, int b){
    while (a>0 && b>0)
    {
        if(a>b) a= a%b;
        else b = b % a;
    }
    if(a==0) return b;
    return a;
}
int main(){
    int a, b;
    cout<<"\nEnter the first number";
    cin>>a;
    cout<<"\nEnter the second number";
    cin>>b;
    cout << "\nGCD: " << gcd(a, b) << endl;
    return 0;
}