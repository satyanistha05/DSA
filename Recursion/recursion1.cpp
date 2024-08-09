#include<bits/stdc++.h>
using namespace std;
void print(int cnt=0){
    if(cnt==4){
        return;    
    }
    cout<<cnt<<endl;
    cnt++;
    print(cnt);
}
int main(){
    print(0);

}