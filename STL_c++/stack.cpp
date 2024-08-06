#include<bits/stdc++.h>
using namespace std;
void explainstack(){

    stack<int>st;
    st.push(2);
    st.emplace(4);
    st.push(2);
    st.push(4);
    st.push(6);

    //here indexing is not available
    cout<<st.top();//as stack is last in first out
                    //so top element is the last element pushed
    st.pop();       //pops the last element pushed

    cout<<st.size();//size of the stack
    cout<<st.empty();//if not empty 1-->false 
                    //if  empty 0-->true
    
    stack<int>st1,st2;
    st1.swap(st2);//swapping

   

}