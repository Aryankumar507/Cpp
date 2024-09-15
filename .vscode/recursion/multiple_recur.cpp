#include<bits/stdc++.h>
using namespace std;

//Multiple recursion question
// Print fabiccano series 
int ques1(int n){
    if(n<=1){
        return n;
    }
    int m = ques1(n-1);
    int q = ques1(n-2);
    return(m+q);
}

int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;
    int ans = ques1(n);
    cout<<ans;
}