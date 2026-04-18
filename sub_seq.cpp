#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void print(int ind, vector<int>&ds, int arr[], int n){
    if(ind==n){
        for(auto it: ds){
            cout<<it<<" ";
        }
        if( ds.size()==0){
            cout<<"{}";
        }
        cout<<endl;
        return;
    }
    ds.push_back(arr[ind]);
    print(ind+1,ds,arr,n);
    ds.pop_back();
    print(ind+1,ds,arr,n);
}

int main(){
    
    int arr[] = {1,2,3,4,5,6,7,8,9};
    vector<int>ds;
    int n = sizeof(arr)/sizeof(arr[0]);
    print(0, ds,arr,n);
    return 0;
}