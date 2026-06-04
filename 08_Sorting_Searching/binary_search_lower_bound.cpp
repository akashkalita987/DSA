#include <algorithm>
#include <iostream>
using namespace std;
int main(){
    int a[] = {1,2,4,4,5,6};
    int n = sizeof(a) / sizeof(a[0]);
    int X;

    cout << "\nEnter the value of X: ";
    cin >> X;
    int ind = lower_bound(a, a + n, X) - a;
    if(ind != n && a[ind] ==X){
        cout << "Lower bound index = " << ind << "\n";
    }
    else cout<<"\n-1";
    return 0;
}