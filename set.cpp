#include<iostream>
#include<set>
using namespace std;
void explainSet(){
    set<int>st;
    st.insert(5);//{5}
    st.insert(7);//{5,7}
    st.insert(3);//{5,7,3}
    st.insert(4);//{5,7,3,4}
    st.insert(9);//{5,7,3,4}
    st.emplace(5);//{5,7,3,4,5}
}
int main(){
    
    return 0;
}