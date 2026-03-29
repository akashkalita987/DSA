#include<iostream>
#include<vector>
using namespace std;

//Vector define

void explainVector(){
    vector<int> v;

    //adding values
    v.push_back(1);
    v.emplace_back(2);

    //adding pair in vector
    vector< pair <int, int>> vec;
    vec.push_back({2,3});
    v.emplace_back(4,5);

    vector<int> v(5,100);

    //copying one vector to another
    vector<int> v1(5,20);
    vector<int> v2(v1);

    vector<int>::iterator it = v.begin();
    it++;
    cout<<*(it)<<" ";
}
int main(){
    explainVector();
    return 0;
}