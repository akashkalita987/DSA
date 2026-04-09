#include<iostream>
#include<string>
using namespace std;

int main (){
    int num1 = 15;
    int cnt1 = __builtin_popcount(num1);
    cout<<"The count is"<<cnt1<<endl;

    long long num2=87236896178734;
    int cnt2 = __builtin_popcount(num2);
    cout<<"The count is"<<cnt2<<endl;
     return 0;
}