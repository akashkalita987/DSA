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
}
int main(){

}