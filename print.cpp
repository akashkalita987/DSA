#include<iostream>
#include<algorithm>
#include<set>
#include<vector>
using namespace std;
void vec(){
    vector<int>p = {1,2,3,4,5,6,7,8};
    for(auto it:p){
        cout<<it<<endl;
    }
}

void sEt(){
    set<int>s = {1,2,3,4,5,6,7,8};
    for(auto it: s){
        cout<<it<<endl;
    }
}
int main(){
    sEt();
    return 0;
}