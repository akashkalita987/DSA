#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>p = {10, 15, 20, 25, 30};
    for(vector<int>::iterator it = p.begin(); it != p.end(); it++){
        cout<<*it<<" ";    
    }
    cout<<endl;
    return 0;
}