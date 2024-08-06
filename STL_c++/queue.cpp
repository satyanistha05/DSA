#include<bits/stdc++.h>
using namespace std;
void explainqueue(){

    queue<int>st;//its FIFO-->first in first out
    st.push(2);
    st.emplace(4);
    st.push(2);
    st.push(4);
    st.push(6);
    

    st.back()+=5;
    cout<<st.back()<<endl;//last element
    cout<<st.front();//first element

    st.pop();//deletes the first element


}