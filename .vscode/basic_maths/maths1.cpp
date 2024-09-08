#include<bits/stdc++.h>
using namespace std;

void ques1(int n){
    //print the digits of a indivisual no.
    while(n>0){
        int num = 0;
        num = n%10;
        cout<<num<<" ";
        n = n/10;
    }
}

//print the no. of digits in the given no. n;
void ques2(int n){
    //method 1;
      int num = 0;
      while(n>0){
        num++ ;
        n = n/10;
    }
    cout<<num;
}
// methode 2;
void ques3(int n){
    int num;
    num = (int)(log10(n)+ 1);
    cout<<num;
    // focus on typecasting;
}

// Reverse the no.;
void ques4(int n){
    int a = 0;
    while(n>0){
        int ln = n%10;
        n = n/10;
        a = (a*10) + ln;
    }
    cout<<a;
}

// check out the no. is palidrome or not;
void ques5(int n){
      int a = 0;
      int dumb = n;
    while(n>0){
        int ln = n%10;
        a = (a*10) + ln;
        n = n/10;
    }
    if(dumb == a){
        cout<<"true";
    }
    else{
        cout<<"False";
    }
}

//Armstrong Number
void ques6(int n){
    int a = 0;
    int b = n;
    while(n>0){
        int num = n%10;
        a = a + ((num*num)*num);
        n = n/10; 
    }
    if(a == b){
        cout<<"true";}
    else {
        cout<<"false";}
}

int main(){
int n;
cout<<"Enter your no: ";
cin>>n;
ques6(n);
}