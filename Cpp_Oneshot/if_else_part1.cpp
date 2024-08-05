// write a program that takes age as input
//and decide whether the age is adult or not

# include<bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cin>>age;
    if(age<18){
        cout<<"He is not adult";
    }
    else{
        cout<<"He is an adult";
    }
    return 0;

}