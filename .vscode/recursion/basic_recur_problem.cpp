#include<bits/stdc++.h>
using namespace std;

//Print name 5 times;
void quest(int n,int i){
    // using base conditioin;
    if(i>n){
     return;
    }
      cout<<"Aryan";
       quest(n,i+1); 
}

//Print the numbers 1 to N;
void quest1(int n,int i){
    if(i>n){
        return;
    }
    cout<<i<<endl;
    quest1(n,i+1);
}

int main(){
int n;
cin>>n;
quest1(n,1);
return 0;
}