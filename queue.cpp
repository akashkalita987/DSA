#include<iostream>
#include<queue>
using namespace std;

void explainqueue(){
    priority_queue<int>pq;

    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10);

    cout << "Max Heap (pq): ";
    while(!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;

    priority_queue<int, vector<int>>pg;
    pg.push(5);
    pg.push(2);
    pg.push(8);
    pg.emplace(10);

    cout << "Min Heap (pg): ";
    while(!pg.empty()) {
        cout << pg.top() << " ";
        pg.pop();
    }
    cout << endl;
}
int main(){
    explainqueue();
    return 0;
}