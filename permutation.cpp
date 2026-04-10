#include<iostream>
#include<string>
#include <algorithm>
using namespace std;

int main(){
    string s = "7138";
    sort(s.begin(),s.end());
    int n = sizeof(s)/sizeof(s[0]);
    do{
        cout<<s<<endl;
    } while (next_permutation(s.begin(), s.end()));
    int maxi = *max_element(s.begin(), s.end());
    return 0;
}