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
void pattern4(int a){
for(int i = 1 ; i<=a; i++){
    for(int j = 1;j<=i;j++){
     cout<<j<<" ";
    }
    cout<<endl;
}
}

void pattern5(int a){
    for(int i = 1 ; i<=a ; i++){
        for(int j = 1 ; j<=i ; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

void pattern6(int a){
    for(int i = a;i>0;i--){
        for(int j = i;j>0;j--){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

void pattern7(int a){
    for(int i = a;i>0;i--){
        for(int j = 1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void pattern8(int a){
for(int i = 1;i<=a;i++){
    for(int j = 1;j<=a-i;j++){
        cout<<" ";
    }
    for(int j = 1;j<=(2*i)-1;j++){
        cout<<"*";
    }
     for(int j = 1;j<=a-i;j++){
        cout<<" ";
    }
    cout<<endl;
}
}

void pattern9(int a){
    for(int i = 0;i<a;i++){
        for(int j = 0;j<i;j++){
            cout<<" ";
        }
        for(int j = (2*(a-i)) - 1 ; j>0 ;j--){
            cout<<"*";
        }
         for(int j = 0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void pattern10(int a){
    for(int i = 0;i<a;i++){
        for(int j=0;j<a-i-1;j++){
           cout<<" ";
        }
        for(int j=0;j<(2*i)+1;j++){
           cout<<"*";
        }
         for(int j=0;j<a-i-1;j++){
           cout<<" ";
        }

        cout<<endl;
    }

    for(int i = 0;i<a-1;i++){
        for(int j = 0;j<=i;j++){
           cout<<" ";
        }
        for(int j = 0;j<(2*(a-i))-3;j++){
            cout<<"*";
        }
         for(int j = 0;j<=i;j++){
           cout<<" ";
        }
        cout<<endl;
    }

}

void pattern11(int a){
    for(int i = 0;i<a;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<a-1;i++){
        for(int j=0;j<(a-i)-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

// Now using if case 

void P11remake(int a){
    for(int i = 1;i<=(2*a)-1;i++){
        if(i>a){
            for(int j=0;j<(2*a)-i;j++){
                cout<<"*";
            }
            cout<<endl;
        }
        else{
            for(int j=0;j<i;j++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
}


void pattern12(int a){
    for(int i = 1;i<=a;i++){
        for(int j = 1;j<=i;j++){
            if((i+j)%2 == 0){
                cout<<"1";
            }
            else{
                cout<<"0";
            }
        }
        cout<<endl;
    }
}

void pattern13(int a){
    for(int i = 1;i<=a;i++){
        for(int j = 0;j<i;j++){
            cout<<(j+1);
        }

        for(int j = 0;j<2*(a-i);j++){
            cout<<" ";
        }

          for(int j = 0;j<i;j++){
            int diff = i-j;
            cout<<diff;
        }
        cout<<endl;
    }
}

pattern14(int a){
int m = 0;
for(int i = 0;i<a;i++){
    for(int j = 0;j<=i;j++){
        m = m+1;
        cout<<m;
    }
    cout<<endl;
}
}


int main(){
 int a;
 cout<<"Enter the no. ";
 cin>>a;
 pattern14(a);
 return 0;
}


