#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=n-1;i>=1;i--){
        int dswap=0;
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                dswap=1;
            }
        }
        if(dswap==0){
            break;
        }
        cout<<"runs \n";
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}


// we use the dswap variable because it will ensure 
//if any swapping is required then dswap value will be 1 
// if not so then dswap will be set to 0
// it helps to optimize the program beacuse it gives time complexity o(n) 
//rather than o(n^2)