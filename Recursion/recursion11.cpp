#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int i,int n){
    if((n/2)>=i){
        return;
    }
    swap(arr[i],arr[n-i-1]);
    reverse(arr,i+1,n);
    
}

void print_array(int arr[],int n){
    cout<<"The reversed array is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n=5;
    int arr[n]={1,2,3,4,5};
    reverse(arr,0,n);
    print_array(arr,n);
    return 0;

}