//Function are a set of codes which performs something for you
//Functions are used to modularise code
//Functions are used to increase the readability
//Functions are used to use same code multiple times
//void-->which doesn't return anything
//return
//parameterised
//non parameterised
# include<bits/stdc++.h>
using namespace std;

// void printname(){  //void and non parameterised
//     cout<<"Hey Satya";
//}

// void printname(string name){   //void and parameterised
//     cout<<"Hey "<<name<<endl;
// }

// int main(){
//     string name;
//     cin>>name;
//     printname(name);
//     return 0;
// }

void sum(int num1, int num2){
    int num3=num1+num2;
    cout<<num3;
}

int main(){
    int num1,num2;
    cin>>num1>>num2;
    sum(num1,num2);
    return 0;
    
}