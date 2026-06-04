#include<iostream>
using namespace std;

void print(int m, int n){
    if (m>n-1)return;
    m++;
    cout<<m<<endl;
    print(m,n);
}

int main(){
    int n;
    int m = 0;
    cout<<"\nEnter the number:";
    cin>>n;
    print(m, n);
    return 0;
}