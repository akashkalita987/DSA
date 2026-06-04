#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n=7789;

    while(n>0){
        int lastDigit = n % 10;
        cout << lastDigit << endl;
        n = n / 10;
    }
    return 0;
}