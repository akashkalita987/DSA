#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int n;
    cout << "Enter the limit of the arr: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the numbers in the array:\n";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // Creating the frequency hash array
    int hash[13] = {0};
    for(int i = 0; i < n; i++){
        // Safety check to prevent crashing if user enters a number >= 13
        if(arr[i] < 13) {
            hash[arr[i]] += 1;
        }
    }

    int q;
    cout << "Enter the No of numbers you want to search: ";
    cin >> q;
    
    // 1. Create a vector to store all the numbers the user wants to search
    vector<int> queries(q);
    cout << "Enter the numbers you want to search:\n";
    for(int i = 0; i < q; i++) {
        cin >> queries[i];
    }

    // 2. Print all the final counts at the very end
    cout << "\n--- Final Search Results ---\n";
    for(int i = 0; i < q; i++) {
        int number = queries[i];
        if(number >= 0 && number < 13) {
            cout << "Count of " << number << ": " << hash[number] << endl;
        } else {
            cout << "Count of " << number << ": 0 (Out of hash bounds)" << endl;
        }
    }
    
    return 0;
}