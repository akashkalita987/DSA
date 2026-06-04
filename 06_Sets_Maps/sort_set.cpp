#include<iostream>
#include<algorithm>
#include<set>
using namespace std;

int main(){
    set<int>s = {5,3,5,7,1,2,9,6,5};
    for(int x : s){
        cout << x << " ";
    }
}