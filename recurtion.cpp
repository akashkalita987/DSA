#include<iostream>
using namespace std;

void print(){
    int n = 10;
    for(int i =1; i<=n; i++){
    cout<<"1"<<endl;
    break;
    }
    print();
    
}
int main(){
    print();
    return 0;
}