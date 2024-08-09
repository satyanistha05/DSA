// Print N to 1 using recursion
#include<bits/stdc++.h>
using namespace std;
//method 1
void print_num(int n,int cnt){
    if(cnt<1){
        return;    
    }
    cout<<cnt<<endl;
    cnt--;
    print_num(n,cnt);
}
//method 2
void print(int i,int n){
    if(i<1){
        return;
    }
    cout<<i<<" ";
    print(i-1,n);
}
int main(){
    int n;
    cin>>n;
    print(n,n);
    cout<<" "<<endl;
    print_num(n,n);
    return 0;

}