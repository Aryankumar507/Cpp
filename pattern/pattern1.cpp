#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,x1 ;
    cout<<"Enter your row";
    cin>>x;
    cout<<"Enter your coloum";
    cin>>x1;
    for(int y = 0 ; y<x; y++){
         
         for(int y1 = 0 ; y1 < x1; y1++ ){
             cout<<"*";
         }
         cout<<endl;
    }
    return 0;
}