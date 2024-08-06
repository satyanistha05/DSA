#include<bits/stdc++.h>
using namespace std;
void explainpairs(){
    pair<int ,int>p={1,3};
    cout<<p.first<<" "<<p.second;
    pair<int,pair<int,int>>z={1,{2,4}};
    cout<<z.first<<" "<<z.second.first<<" "<<z.second.second;
    pair<int,int> arr[]={{1,2},{3,4},{1,8}};
    cout<<arr[0].first<<" "<<arr[0].second;

}