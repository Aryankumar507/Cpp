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

//Print the numbers in reverse order;
void ques2(int n,int i){
    if(i>(n-1)){
        return;
    }
    cout<<(n-i)<<" ";
    ques2(n,i+1);
}

//Print the numbers 1 to N but by back trav. ;
void ques3(int n,int i){
    if(i<1){
        return;
    }
    ques3(n,i-1);
    cout<<i;
}
//Print the numbers n to 1 but by back trsv.;
void ques4(int n,int i){
    if(i>n){
        return;
    }
    ques4(n,i+1);
    cout<<i<<" ";
}
//Sum of n numbers (parameterised function)
void ques5(int n,int i){
    if(n<0){
        return;
    }
    ques5(n-1,i+n);
}

// Sum of n numbers using fumcyional recursion ;
int ques6(int n){
    if(n==0){
        return 0;
    }
   return (n+ques6(n-1));
}
//Find factorial of any numbers using parameterised recursion
int ques7(int n,int multi){
    if(n<1){
         cout<<multi;
        return 0;
    }
    ques7(n-1,multi*n);  
}

//Find factorial of any numbers using functional recursion;
int ques8(int n){
    if(n==0){
        return 1;
    }
    else {
       return n*ques8(n-1);
    }
}

int main(){
int n;
cin>>n;
int m = ques8(n);
cout<<m;
return 0;
}