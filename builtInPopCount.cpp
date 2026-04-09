#include<iostream>
#include<string>
using namespace std;

int main (){
    int num = 7;
    int cnt = __builtin_popcount(num);
    cout<<"The count is"<<cnt<<endl;
    return 0;
}