#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int cntDigits=0;

    while(n>0){
        int ld=n%10;
        sum = sum + pow(ld, 3);
        n=n/10;
        cntDigits=cntDigits+1;
    }
    cout<<sum;
    return 0;
}