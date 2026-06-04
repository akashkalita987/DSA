#include<iostream>
using namespace std;

int a[10];  // Global array

void re(int l, int r){
    if(l >= r){
        return;
    }
    swap(a[l], a[r]);
    re(l + 1, r - 1);
}

int main(){
    int n;
    cout << "\nEnter the limit of the array: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    re(0, n - 1);  // No need to pass array

    cout << "\nReversed array: ";
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }

    return 0;
}