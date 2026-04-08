#include<iostream>
#include<map>
using namespace std;

void explainMap(){
    map<int, int>mpp;
    map<int, pair<int, int>>mpp;
    map<pair<int, int>, int>map;

    //inserting 2 in mpp in 1 key
    mpp[1] = 2;

    mpp.emplace(3,1);

    mpp.insert({2,4});

    map[{2,3}] = 10;

    for
}