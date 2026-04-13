#include<iostream>
using namespace std;

void sm(int i, int sum){
    if(i<1) {
        cout<<sum<<endl;
        return;
    }
    sm(i-1,sum+i);
}

int main(){
    int n;
    cout<<"\nEnter the name:";
    cin>>n;
    sm(n,0);
    return 0;
}