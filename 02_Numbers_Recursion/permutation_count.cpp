#include<iostream>
#include<string>
#include <algorithm>
using namespace std;

int main(){
    string s = "342";
    sort(s.begin(),s.end());
    int n = s.size();
    do{
        cout<<s<<endl;
    } while (next_permutation(s.begin(), s.end()));
    int maxi = *max_element(s.begin(), s.end());
    return 0;
}