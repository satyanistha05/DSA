#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> divisors;

    for(int i = 1; i <= sqrt(n); i++) {
        if(n % i == 0) {
            divisors.push_back(i);
            if(n / i != i) {
                divisors.push_back(n / i);
            }
        }
    }

    sort(divisors.begin(), divisors.end());
    for(auto it: divisors){
        cout<<it<<" ";
    }

    return 0;
}
