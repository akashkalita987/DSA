#include<iostream>
#include<set>
#include<algorithm>
using namespace std;

void explainMulti(){
    //Every thing is same set
    //only stores duplicate elements also

    multiset<int>ms;
    ms.insert(1); //{1}
    ms.insert(1); //{1,1}
    ms.insert(1); //{1,1,1}

    ms.erase(1); //all 1's ersaed
    
    int cnt = ms.count(1);
    
    //only a single one erased
    ms.erase(ms.find(1));
    
    auto it = ms.find(1);
    if (it != ms.end()) {
        auto it2 = std::next(it, 2);
        ms.erase(it, it2);
    }
    //rest all function same as set
    cout<<"complited"<<endl;
}
int main(){
    explainMulti();
    return 0;
}