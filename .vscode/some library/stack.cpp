#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;
    // its just like LIFO means last in first out 
    // here indexex are not allowed 
    // mainaly here three fuction are use push , pop , top;
    st.push(3);// 3
    st.push(2);// 2,3
    st.push(1);// 1,2,3
    st.emplace(0);// 0,1,2,3
    cout<<st.top();
    st.pop();// it earse the top element 
    cout<<st.top();
}