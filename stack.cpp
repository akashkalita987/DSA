#include<iostream>
#include<stack>
using namespace std;
void explainStack(){
    stack<int> st;
    st.push(1);//{1}
    st.push(2);//{1,2}
    st.push(3);//{1,2,3}
    st.push(4);//{1,2,3,4}
    st.emplace(5);//{5,4,3,2,1,}
}
int main(){
    return  0;
}