#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"\nEnter the  number";
    cin>>n;
    for(int i=1; i<=n; i++){
        if(n% i == 0){
            cout<<"the divisors are:"<<i<<endl;
        }
    }
    return 0;
}