#include<iostream>
#include<queue>
using namespace std;

void explainqueue(){
    priority_queue<int>pq;

    pq.push(5);//{2}
    pq.push(2);//{5,2}
    pq.push(8);//{8,5,2}
    pq.emplace(10);//{10,8,5,2}

    cout<<pq.top(); //{8, 5, 2}

    pq.pop(); //{8, 5, 2}

    cout<<pq.top(); //print 8

    //size swap empty function same as others
    //minimum heap

    priority_queue<int, vector<int>>pg;
    pg.push(5);//{2}
    pg.push(2);//{2,5}
    pg.push(8);//{2,5,8}
    pg.emplace(10);//2,5,8,10}

    cout<<pg.top(); //print 2
}
int main(){
    explainqueue();
    return 0;
}