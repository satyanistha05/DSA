#include<bits/stdc++.h>
using namespace std;
 void explainset(){ //ordered and unique
 //everything happens in logn time complexity
    set<int>st;
    st.insert(1);
    st.insert(2);
    st.insert(5);
    st.insert(7);
    st.insert(2);

    //functionality of insert in vector can be used also
    //that only increases efficiency


    auto it=st.find(5);

    auto it=st.find(9); //point towards st.end()-->right after the last element

    st.erase(5);//erases 5 takes logarithmic time

    int cnt=st.count(2);//if it is present then then it will return 1 and if not then return 0

    auto it=st.find(7);
    st.erase(it);//it takes constant time


    auto it1=st.find(1);
    auto it2=st.find(7);
    st.erase(it1,it2);//[first,last)


    auto it=st.lower_bound(2);

    auto it=st.upper_bound(3);





    


 }