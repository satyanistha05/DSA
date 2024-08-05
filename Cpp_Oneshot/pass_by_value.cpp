#include<bits/stdc++.h>
using namespace std;
void dosomething(int num){
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;

}



int main(){
    int num;
    cin>>num;
    dosomething(num);
    cout<<num<<endl;//pass by value-->in this a copy is created and then modifications are done while 
                    //original remains int the memory location as it is
    return 0;
}