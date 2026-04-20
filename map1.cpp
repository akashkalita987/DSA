#include <iostream>
#include <map>
#include <tuple> // Required for tuples
#include <string>

using namespace std;

int main() {
    // Defining the map
    map<int, tuple<char, string, float>> mp;
    // Inserting values
    mp[30] = make_tuple('A', "akash", 4.5f);
    
    // Note: .insert() will not overwrite if key 30 already exists.
    // mp.insert({40, {'B', "bob", 3.2f}}); 

    for (auto const& it : mp) {
        // it.first is the Key (int)
        // it.second is the Value (tuple)
        
        cout << "Key: " << it.first << " | ";
        
        // Use std::get<index> to access tuple elements
        cout << "Values: " << get<0>(it.second) << ", " 
                           << get<1>(it.second) << ", " 
                           << get<2>(it.second) << endl;
    }

    return 0;
}