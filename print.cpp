#include<iostream>
#include<algorithm>
#include<set>
#include<vector>
#include<list>
using namespace std;

//printing a vector
void vec(){
    vector<int>p = {1,2,3,4,5,6,7,8};
    for(auto it:p){
        cout<<it<<endl;
    }
}

//printing a set
void sEt(){
    set<int>s = {1,2,3,4,5,6,7,8};
    for(auto it: s){
        cout<<it<<endl;
    }
}

//printing a pair
void pAir(){
    pair<string, string>p = {"hello","world"};
    cout<<p.first<<" "<<p.second<<endl;
    swap(p.first,p.second);
    cout<<p.first<<" "<<p.second<<endl;
}

//printing kist
void liSt(){
    list<int>l = {1,2,3,4,5,6,7,8};
    for(auto it : l){
        cout<<it<<endl;
    }
}

//main function
int main(){
    int choice;
    cout<<"\nEnter the you want to print \n1.Vector\n2.Set\n3.Pair\n4.List"<<endl;
    cin>>choice;
    switch (choice)
    {
    case 1:
        vec();
        break;
    case 2:
        sEt();
        break;
    case 3:
        pAir();
        break;

        case 4:
        liSt();
        break;
    }
    return 0;
}