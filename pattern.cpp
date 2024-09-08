#include<bits/stdc++.h>
using namespace std;

int factorial(int num){
    if(num == 1) return 1 ;
    return num*factorial(num-1) ;
}

int main(){
    int a;
    int fac = 1;
  cout<<"Enter your no. ";
  cin>>a;
  for(int i = a;i>0;i--){
    fac = fac*i;
  }
  cout<<fac << endl;

      cout << factorial(a) << endl ;
}
