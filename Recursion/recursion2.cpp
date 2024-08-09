//print name n times
#include<bits/stdc++.h>
using namespace std;

void print_name(int n, int cnt){
    if(cnt >=n){
        return;
    }
    cout<<"Satya"<<endl;
    cnt++;
    print_name(n, cnt);
}

int main(){
    int n;
    cin>>n;
    print_name(n, 0);  
    return 0;
}