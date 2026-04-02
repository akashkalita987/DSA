#include<iostream>
#include<set>
using namespace std;
void explainSet(){
    set<int>st;
    st.insert(5);//{5}
    st.insert(7);//{5,7}
    st.insert(3);//{5,7,3}
    st.insert(4);//{5,7,3,4}
    st.insert(9);//{5,7,3,4,9}
    st.emplace(5);//{5,7,3,4,9,5}

    //{5,7,3,4,9,5}
    auto it = st.find(3);  
    
    //{5,7,3,4,9,5}
    auto it = st.find(6);  

    st.erase(5);

    int cnt = st.count(1);
}
int main(){
    
    return 0;
}