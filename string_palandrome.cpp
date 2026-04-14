#include<iostream>
using namespace std;

bool fu( int i, string &s){
    if(i>= s.size()/2) return true;
    if(s[i]!= s[s.size()-i-1]) return false;
    return fu(i+1, s);
}

int main(){
    string s;
    cout<<"\nEnter the string:\n";
    cin>>s;
    cout<<(fu(0, s) ? "palindrome" : "Not pslindrome");
    return 0;
}