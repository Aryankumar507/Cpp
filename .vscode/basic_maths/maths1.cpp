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

// Print all divisions of the given no.
void ques7(int n){
    for(int i = 1;i<=n;i++){
        if(n%i == 0){
            cout<<i<<" ";
        }
    }
}

// Another methode to reduce the time complexity of the previous question;
void ques8(int n){
    vector<int> ls;
    for(int i = 1;(i*i)<=n;i++){
        if(n%i == 0){
            ls.push_back(i);
              if((n/i) != i){
                ls.push_back(n/i);
        }
        }
    }
       sort(ls.begin(),ls.end());
       for(auto it : ls)cout<<it<<" ";  
}

// find out the prime no.
void ques9(int n){
    int count = 0;
for(int i =1;i<=n;i++){
    if(n%i == 0){
        count++;
    }
}
if(count == 2){
    cout<<"true";
}
else{
    cout<<"false";
}
}

// another method
void ques10(int n){
    int ct = 0;
    for(int i = 1;(i*i)<=n;i++){
        if(n%i==0){
            ct++;
        }
    }
    if((ct*2)==2)cout<<"true";
    else cout<<"false";
}

// GCD and HCF
// for finding GCD of two numbers;
void ques11(int n1,int n2){
    int x = 0;
    if(n1>n2){
        ques11(n2,n1);
    }
    for(int i = 1;i<=n1;i++){
       if(n1%i==0 && n2%i==0){
        x = i;
       }
    }
}
// Eucliden Algoritum
void ques12(int n1,int n2){
    while(n1>0 && n2>0){
        if(n1>n2){
            n1 = n1%n2;
        }
        else{
            n2 = n2%n1;
        }
    }
    if(n1 == 0)cout<<n2;
    else cout<<n1;
}
int main(){
cout<<"Enter your no: ";

ques12(12,4);
}