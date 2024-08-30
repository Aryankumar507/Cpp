#include<bits/stdc++.h>
using namespace std;

void pattern15(int a){
    for(int i = 0;i<a;i++){
        for(int j = 0;j<=i;j++){
            char ch = 'A';
            ch = ch+j ;
            cout<<ch;
        }
        cout<<endl;
    }
}

void pattern16(int a){
    for(int i = 0;i<a;i++){
        for(int j = 0;j<(a-i);j++){
            char ch = 'A';
            ch = ch+j;
            cout<<ch;
        }
        cout<<endl;
    }
}

void pattern17(int a){
    for(int i = 0;i<a;i++){
        for(int j = 0;j<=i;j++){
            char ch = 'A';
            ch = ch+i;
            cout<<ch;
        }
        cout<<endl;
    }
}

void pattern18(int a){
    for(int i = 0;i<a;i++){
        for(int j = 0;j<a-i-1;j++){
            cout<<" ";
        }
        for(int j = 0;j<=i;j++){
            char ch = 'A';
            ch = ch+j;
            cout<<ch;
        }
        for(int j = i;j>0;j--){
            char ch = 'A';
            ch = (ch+j)-1;
            cout<<ch;
        }
        cout<<endl;
    }
}

int main(){
    int a;
    cout<<"Enter the no. ";
    cin>>a;
    pattern18(a);
    return 0;
}