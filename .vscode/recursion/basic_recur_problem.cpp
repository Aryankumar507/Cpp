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
// Here TC is 0(n) as well as SC is 0(n)
// Reverse the number using the array;

void ques9(int m,int array[],int n){
    if(m>=n/2){
       return;
    }
swap(array[m],array[n-m-1]);
ques9(m+1,array,n);
}

// Check the given string is paladrone or not
// we can use array


void ques10(string n,int l){
    int len = n.size();
     if(n[l] >= n[len/2] ){
     cout<<"True";
     return;
    }
    if(n[l]!=n[(len-l-1)]){
        cout<<"False";
        return;
    }
    ques10(n,l+1);
}
int main(){
string n;
getline(cin,n);
ques10(n,0);
return 0;
}