#include<bits/stdc++.h>
using namespace std;
void explainpriorityqueue(){
//max heap-->descending from top
//largerst element at the top -->highest priority

    priority_queue<int>st;
    st.push(2);
    st.emplace(4);
    st.push(2);
    st.push(4);
    st.push(6);

    cout<<st.top();


    st.pop();


    ////min heap-->ascending from top

    priority_queue<int,vector<int>, greater <int>>pq; //greater<int> reverses the ordering 
                                             //smalllest element at the top-->highest priority

    pq.push(5);
    pq.push(2);
    pq.push(3);
    pq.push(7);

    cout<<pq.top();







}