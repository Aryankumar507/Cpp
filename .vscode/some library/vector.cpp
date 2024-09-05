#include<bits/stdc++.h>
using namespace std;
int main(){
   // vector<int> v;
   // v.push_back(1);
   // v.emplace_back(1);

   // vector<pair<int,int>>vec;
   // v.push_back({1,2});
   // v.emplace_back(1,2);
// vectors r dynamic in nature and we can further increase its size.
   vector<int> v(5,20);
   vector<int>::iterator it = v.begin();
   it++;
   cout<<*(it)<<endl;
   // for print entire vector series
   for(vector<int>::iterator it = v.begin();it!= v.end();it++){
      cout<<*(it)<<" ";
   }
   cout<<endl;
   // using shortcut
   for(auto it = v.begin();it!=v.end();it++){
      cout<<*(it)<<" ";
   }
   cout<<endl;
   // here we have not use begin or end like functions for print entire series
   for(auto it:v){
      cout<<it<<" ";
   }
   cout<<endl;
   // now earse any element 
   v.erase(v.begin() + 1);
    for(auto it:v){
      cout<<it<<" ";
   }
   cout<<endl;
   //now earse any two elements so we have to do
   v.erase(v.begin()+1,v.begin()+3);
   for(auto it:v){
      cout<<it<<" ";
   }
     cout<<endl;
     // for inerting any number between the vector
   v.insert(v.begin(),3,5);
   for(auto it:v){
      cout<<it<<" ";
   }
   cout<<endl;
   // for coping any number we have to do
   vector<int> copy(2,6);
   v.insert(v.begin(),copy.begin(),copy.end());
     for(auto it:v){
      cout<<it<<" ";
   }
   cout<<endl;
   //for determine the size of vector
   cout<<v.size()<<endl;
   /*    
    similarly we use swap for swaping and pop_back use 
    for poping last element and clear for earse all element
    at once.
   */
   
   }