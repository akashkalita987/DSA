#include<iostream>
#include<queue>
#include<algorithm>
#include<vector>
using namespace std;
int main (){
    queue<int>q;
    q.push(3);
    q.push(4);
    q.push(8);
    q.push(7);
    q.push(6);
    q.push(5);
    q.push(9);
    q.push(2);
    
    vector<int> v;
    while(!q.empty()){
        v.push_back(q.front());
        q.pop();
    }
    sort(v.begin(), v.end());
    
    for(int num : v){
        cout << num << " ";
    }
    return 0;
}