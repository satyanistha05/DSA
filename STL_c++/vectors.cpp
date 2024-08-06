// Performance Comparison: push_back vs emplace_back
// In general, emplace_back is faster than push_back because it avoids the extra copy or 
//move operation. 
// the performance difference is usually only significant when working with complex objects 
// or large datasets.




#include<bits/stdc++.h>
using namespace std;
void explainvectors(){
    vector<int>v1;
    v1.push_back(23);//push_back creates a temporary object, 
                    //which is then copied or moved into the vector. 
                    //This can lead to an extra copy or move operation
    
    v1.emplace_back(23);//emplace_back constructs the object directly in the vector's memory, 
                        //avoiding the extra copy or move operation
    
    
    vector<pair<int,int>>v2;
    v2.push_back({1,2}); //temporary pair<int, int> object is created 
                        //using the {1, 2} initializer list. 
                       //This temporary object is then copied into the vector.
                      //here a curly bracket is required
    
     v2.emplace_back(1,2);//In this case,the pair<int, int> object is constructed directly in
                         //vector's memory using the 1 and 2 arguments. 
                         //No temporary object is created.
                         //here no curly brackets are required
    

    vector<int>v(5,100);//(5, 100): This is the initializer for the vector. 
                        //The first argument 5 specifies the initial size of the vector, 
                        //second argument 100 specifies the initial value for each element. 
    

    vector<int>s(5);//5 specifies the initial size of the vector
                    // if we add one more element it will increase its size automatically

    vector<int>v2(v1);


    vector<int>::iterator it=v.begin();
    
    it++;
    cout<<*(it)<<" "; // This line dereferences the iterator it (using the unary * operator) 
                       // to access the element it points to and prints its value 
                        //to the console followed by a space.
    it=it+2;
    cout<<*(it)<<" ";

    vector<int>::iterator it=v.end(); //returns an iterator pointing to the end ofthe vector v. 
                           // Note that this is not the last element of the vector 
                        //but rather an iterator pointing to a position one past the last element. 
    
    cout<<v[0]<<" "<<v.at(0);//fetch vector element
    cout<<v.back()<<" ";//displays the last element


    for(vector<int>::iterator it=v.begin(); it !=v.end();it++){
        cout<<*(it)<<" ";
    }

    for(auto it=v.begin();it!=v.end();it++){
          cout<<*(it)<<" ";
    }

    for(auto it: v){
        cout<<it<<" ";
    }


    v.erase(v.begin()+1);//it is used to delete a specific element
    v.erase(v.begin()+2,v.begin()+4);

    vector<int>v(2,100);
    v.insert(v.begin(),300);//it is used to insert an element at a specified position.
    v.insert(v.begin()+1,2,200);

    vector<int> copy(2,50);
    v.insert(v.begin(),copy.begin(),copy.end());//starting and ending postion of the copy vector 


    v1.swap(v);//swapping of two vectors

    v.clear();//erases the entire vectors

    v.pop_back();//pops or erases the last element;

    cout<<v.size();//size of the vector

    cout<<v.empty();// if not empty 1-->false 
                    //if  empty 0-->true

    
    












}