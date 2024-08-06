#include<bits/stdc++.h>
using namespace std;
void explaindeque(){

    deque<int>dq;
    dq.push_back(2);
    dq.emplace_back(4);

    dq.push_front(5);
    dq.emplace_front(3);

    dq.pop_front();
    dq.pop_back();

    dq.back();
    dq.front();

}