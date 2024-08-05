#include<bits/stdc++.h>
using namespace std;
void dosomething(int arr[],int n){
    arr[0]+=100;
    cout<<"Value inside the functions: "<<arr[0]<<endl;
}
int main(){
    int n=5;
    int arr[n];
    for(int i=0;i<n;i+=1){
        cin>>arr[i];
        cout<<arr[i]<<"-->"<<i<<endl;

    }
    dosomething(arr,n);
    cout<<"Value outside the function: "<<arr[0]<<endl;
    return 0;
}

//output shows that arrays are always passed by reference