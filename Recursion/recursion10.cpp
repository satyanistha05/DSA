#include<bits/stdc++.h>
using namespace std;
void printarray(int arr[],int n){
    cout<<"The reversed array is: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void reverse(int arr[],int l,int r){
    if(l<r){
        swap(arr[l],arr[r]);
        reverse(arr,l+1,r-1);
    }
    
}
int main(){
    int n=5;
    int arr[]={5,4,3,2,1};
    reverse(arr,0,n-1);
    printarray(arr,n);
    return 0;


    


}