#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    
    if(p1.first > p2.first) return true;
    return false;
}

int main(){
    pair<int, int>a[] = {{1,2},{2,1},{4,1}};
    int n = sizeof(1) / sizeof(a[0]);
    //sort it according to second element
    //if second element is same, then sort
    //it according to first element but in descending

    sort(a, a + n, comp);
    
        for(auto p : a){
        cout << "(" << p.first << ", " << p.second << ")" ;
    }
    cout<<endl;
    return 0;
}