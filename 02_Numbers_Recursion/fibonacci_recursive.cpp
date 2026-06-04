#include<iostream>
using namespace std;

int fibo(int n){
    
    if(n <= 1) return n; 
    
    int last, slast;

    last = fibo(n - 1);
    slast = fibo(n - 2);

    return last + slast;
}

int main(){
    int n;
    /*cout << "\nEnter the number of terms: ";
    cin >> n;
    */
    // To print the series, we loop and call the function for each index
   /* for(int i = 0; i < n; i++) {
        cout << fibo(i) << (i == n - 1 ? "" : ", ");
    }*/
   cout<<fibo(4);
    
    return 0;
}