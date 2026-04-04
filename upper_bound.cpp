#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a[]= {1,2,3,4,5,6};
    int n = sizeof(a)/  sizeof(a[0]);
    int X;

    cout<<"\nEnter the value of X";
    cin>>X;
    int ind = upper_bound(a, a+n, X) - a;

    cout<<"Upper bound index is:"<<ind<<"\n";
    return 0;
}