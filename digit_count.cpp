#include<iostream>
using namespace std;
int count(int n){
    int cnt = 0;
    while (n > 0) {
        n /= 10;
        cnt++;
    }
    return cnt;
}
int main(){
    int n = 2184438;
    cout<<"the numbers in n is:"<<count(n);
    return 0;
}