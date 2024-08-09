// Print 1 to N using recursion
#include<bits/stdc++.h>
using namespace std;
void print_num(int n,int cnt){
    if(cnt>n){
        return;    
    }
    cout<<cnt<<endl;
    cnt++;
    print_num(n,cnt);
}
int main(){
    int n;
    cin>>n;
    print_num(n,1);
    return 0;

}