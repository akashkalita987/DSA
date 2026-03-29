#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<float>v= {10, 10.5, 11, 12, 12.5};
    v.insert(v.begin()+3,11.5);
    for(auto it:v ){
        cout<<it<<" ";
    }
    cout<<endl;
}