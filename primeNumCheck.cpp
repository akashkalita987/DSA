#include<iostream>
#include<cmath>
using namespace std;

void CheckPrime(int n){
    int cnt = 0;
    for(int i = 1; i*i<=n; i++){
        if(n%i == 0){
            cnt++;
            if((n/2 != i)){
                cnt++;
            }
        }
    }
    if(cnt ==2)cout<<n<<"is a prime number";
    else cout<<n<<"is not a prime number";
}
int main(){
    int n;
    cout<<"\nEnter the number to be checked";
    cin>>n;
    CheckPrime(n);
    return 0;
}