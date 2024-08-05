#include<bits/stdc++.h>
using namespace std;
void dosomething(int &num){  //& takes to the memory location where original number is stored
                            //and make changes to it
                            //this is called pass by reference
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
    cout<<num<<endl;
    return 0;
}