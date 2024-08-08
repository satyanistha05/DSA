#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1;
    int n2;
    int gcd;
    cin>>n1>>n2;
    
    //bruteforce method 1
    // for(int i=1;i<=n1;i++){
    //     if(n1%i==0 && n2%i==0){
    //         gcd=i;
    //     }
    // }
    
    
    //bruteforce method 2
    // for(int i=1;i<=min(n1,n2);i++){
    //     if(n1%i==0 && n2%i==0){
    //         gcd=i;
    //     }
    // }

    //optimal method 
    for(int i=min(n1,n2);i>=1;i--){
        if(n1%i==0 && n2%i==0){
            cout<<i;
            break;
        }
    }

    return 0;
}