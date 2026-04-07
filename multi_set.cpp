#include<iostream>
#include<set>
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
}