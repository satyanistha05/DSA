#include<bits/stdc++.h>
using namespace std;
void explainmap(){//stores the keys in a sorted order
    map<int,int> mpp;//key value
    // map<int,pair<int,int>>mp;//key value is pair
    // map<pair<int,int>,int>mpp;//key is pair  value

    mpp[1]=2;
    mpp.insert({3,1});
    mpp.insert({2,4});
    mpp.insert({1,5});
    

    for (auto it:mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }

    cout<<mpp[1];
    cout<<mpp[5];//if not found then its null
    auto it=mpp.find(3);
    cout<<*(it).second;

    auto it=mpp.find(5);

    auto it=mpp.upper_bound(2);
    auto it=mpp.lower_bound(3);




}