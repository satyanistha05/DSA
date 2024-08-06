# include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> a,pair<int,int> b){
    if(p1.second<p2.second) return true;
    if(p1.second>p2.second) return false;

    //if they are same

    if(p1.first>p2.first)return True;
    return false;

}

void explainextra(){

    sort(a,a+n);

    sort(v.begin(),v.end());

    sort(a+2,a+4);

    pair<int,int>a[]={{1,2},{2,1},{4,1}};

    //sort it according to second element
    // if second is same,then sort
    // it according to first element but in descending

    sort(a,a+n,comp); //we should use comp if we are doing sorting in our way
    // {4 , 1},{2 , 1},{1 , 2};

    int num=7;
    int cnt=__builtin_popcount();

    long long num=165786767678789454;
    int cnt=__builtin_popcountll();


    string s="123";//we have to sort it to find the permutation
    sort(s.begin(),s.end());

    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end()));//returns all the permutation of the string s

    int maxi=*max_element(a,a+n);//if we are giving * it will return the element 
                                    // if we are not giving then it will return the address
                                    






}