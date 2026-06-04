#include<iostream>
using namespace std;

void print(int current, int n){
    if(current > n) return;
    cout<<current<<endl;
    current++;
    print(current, n);
}

int main(){
    int n = 0;
    cout << "Enter a number: ";
    cin >> n;
    print(0, n);
    return 0;
}