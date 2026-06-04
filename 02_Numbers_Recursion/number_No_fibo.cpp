#include<iostream>
using namespace std;

int f(int n){
    if (n<=1){
        return n;
    }
    int last = f(n-1);
    int Se_last = f(n-2);
    return last + Se_last;
}

int main(){
    cout<<f(4);
    return 0;
}