#include<iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cout<<"\nEnter the number";
    cin>>n;

    
    int original = n;
    int digitCount = 0;
    int temp = n;
    if(n == 0){
        digitCount = 1;
    }else{
        while(temp > 0){
            digitCount++;
            temp /= 10;
        }
    }
    int sum = 0;
    while(n > 0){
        int lastDigit = n % 10;
        sum += (int)pow(lastDigit, digitCount);
        n /= 10;
    }
    if(sum == original){
        cout << "Armstrong number" << endl;
    }else{
        cout << "Not an Armstrong number" << endl;
    }
    return 0;
}