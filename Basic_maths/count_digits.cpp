#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int count_digits=0;
    cin >> n;
    while(n>0){
        int lastdigit=n%10;
        count_digits=count_digits+1;
        n=n/10;

    }
    cout<<count_digits;
    return 0;
}