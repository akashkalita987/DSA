#include<iostream>
using namespace std;
void print(int n, int m, string name){
    if(n>m) return;
    n++;
    cout<<name<<endl;
    print(n,m,name);
}
int main(){
    string name= "akash";
    int n = 1;
    int m = 10;
    print(n,m,name);
    return 0;
}