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

void pattern19(int a){
    for(int i=0;i<a;i++){
        for(int j=0;j<=i;j++){
            char ch = 'A';
            ch = ch + (a-1);
            ch = ch-(i-j);
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}


void pattern20(int a){
   for(int i = 0;i<a;i++){
    for(int j = 0;j<a-i;j++){
        cout<<"*";
    }
    for(int j = 0;j<2*i;j++){
        cout<<" ";
    }
     for(int j = 0;j<a-i;j++){
        cout<<"*";
    }
    cout<<endl;
   }
   for(int i = 0;i<a;i++){
    for(int j = 0;j<=i;j++){
        cout<<"*";
    }

    for(int j = 0;j<(a-i-1)*2;j++){
        cout<<" ";
    }

    for(int j = 0;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
   }
}


void pattern21(int a){
    for(int i = 0;i<a;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        for(int j = 0;j<(a-i-1)*2;j++){
            cout<<" ";
        }
          for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<a-1;i++){
        for(int j = 0;j<(a-i)-1;j++){
            cout<<"*";
        }
        for(int j = 0;j<(i+1)*2;j++){
        cout<<" ";
        }
         for(int j = 0;j<(a-i)-1;j++){
            cout<<"*";
        }
          cout<<endl;
    }
}

void pattern22(int a){
    for(int i = 0;i<a;i++){
        for(int j = 0;j<a;j++){
            if(i==0||i==a-1||j==0||j==a-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

void pattern23(int a){
    if(a<3||(a%2)==0){
        cout<<"Enter any odd no greater than 2";
    }
    else{
        for(int i = 0;i<a;i++){
            for(int j = 0;j<a;j++){
                if(i==0||i==a-1||j==0||j==a-1){
                    cout<<((a+1)/2);
                }
                else if(i==1||i==a-2||j==1||j==a-2){
                   int m = (a-1)/2;
                    cout<<m;
                }
                else if(i==2||i==a-3||j==2||j==a-3){
                    int m1=(a-3)/2;
                    cout<<m1;
                }
                else{
                    cout<<"1";
                }
            }
            cout<<endl;
        }
    }
}

void pattern23a(int a){
    for(int i = 0;i<(2*a)-1;i++){
        for(int j = 0;j<(2*a)-1;j++){
            int top = i;
            int left = j;
            int right  = ((2*a)-2)-j;
            int bottom = ((2*a)-2)-i;
            cout<<a-min(min(top,bottom),min(right,left));
        }
        cout<<endl;
    }
}

int main(){
    int a;
    cout<<"Enter the no. ";
    cin>>a;
    pattern23a(a);
    return 0;
}