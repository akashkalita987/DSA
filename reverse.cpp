#include<iostream>
using namespace std;
int revNo(int n){
    int re = 0;
    while (n>0)
    {
        int lastDigit = n % 10;
        n = n/10;
        re = (re*10)+lastDigit;
    }
    return re;
    
}
int main(){
    int n = 95372;
    cout<<"\nThe reverse is:"<<revNo(n);
    return 0;
}