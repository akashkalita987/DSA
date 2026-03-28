#include<iostream>
using namespace std;
void explainPair(){
    pair<int, int> p = {1,3};
    cout<<p.first<<" "<<p.second;
}
int main(){
    explainPair();
    return 0;
   
}