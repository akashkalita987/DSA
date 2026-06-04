#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int>v = {2,4,1,6,3,9,7,8};
    cout<<"The vector is before sorting\n<";
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout<<*it;
    }
    cout<<">"<<endl;
    sort(v.begin(),v.end() , greater<int>());
    cout<<"The vector is after sorting\n<";
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout<<*it;
    }
    cout<<">"<<endl;
    return 0;
}