/*   
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
*/
#include<bits/stdc++.h>
using namespace std;

void pattern2(int a){
     for(int i = 0;i<a ; i++ ){
        for(int j = 0;j<a;j++){
            cout<<"*" ;
        }
        cout<<endl ;
     }
}


void pattern3(int a){
    for(int i = 0; i<a ; i++){
        for(int j = 0;j<= i; j++){
            cout<<"*";
        }
        cout<<endl ;
    }
}

int main(){
 int a;
 cout<<"Enter the no. ";
 cin>>a;
 pattern3(a);
 return 0;
}


