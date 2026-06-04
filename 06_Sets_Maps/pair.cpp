#include<iostream>
using namespace std;
//single pair 

void singlePair(){
    pair<int, int> p = {1,3};
    cout<<p.first<<" "<<p.second;
    cout<<endl;
}

//nested pair

void nesPair(){
    pair<int, pair<int, int>> p = {1, { 2 , 3 } };
    cout<<p.first<<" "<< p.second.second<<" "<<p.second.first;
    cout<<endl;
}

//array pair

void arrPair(){
    pair<int, int> arr[] = { {1,2}, {3,4}, {5,6}};
    cout<<arr[1].second;
}
int main(){
    singlePair();
    nesPair();
    arrPair();
    return 0;
   
}