#include<bits/stdc++.h>
using namespace std;
 void explainmultiset(){ // sorted but not unique
                        //stores the duplicate element also
    multiset<int>st;
    st.insert(1);
    st.insert(1);
    st.insert(1);
    st.insert(2);
    st.insert(2);

    st.erase(1);//all 1's are erased
    int cnt=st.count(1);


    st.erase(st.find(1));//only one 1 is erased

    
 }