#include<bits/stdc++.h>
using namespace std;
int sum(int num1 ,int num2){ //return type and parameterised function
    int num3=num1+num2;
    return num3;       //mandatory to have a return statement
}
int main(){
    int num1,num2;
    cin>>num1>>num2;
    int res=sum(num1,num2);
    cout<<res;
    return 0;

}