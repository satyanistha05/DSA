#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int duplicate = n;  // Assign duplicate after reading input
    int reverse = 0;
    
    while(n > 0){
        int lastdigit = n % 10;
        reverse = (reverse * 10) + lastdigit;
        n = n / 10;
    }
    
    if(duplicate == reverse){
        cout << "Its a palindrome";
    }
    else{
        cout << "Its not a palindrome";
    }
    
    return 0;
}
