#include<iostream>
using namespace std;
int main(){
    int a[]  = {1,2,3,4,5,6};
    int X;
    int n = a.size();
    cout<<"\nEnter the value of X:";
    cin>>X;
    int ind = lower_bound(a, a+n, X) - a;

}