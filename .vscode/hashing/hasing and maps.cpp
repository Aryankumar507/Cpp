#include<bits/stdc++.h>
using namespace std;

/*
int main(){
    int n ;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    //precompute
    int hash[13] = {0};
    for(int i = 0;i<n;i++){
        hash[arr[i]] += 1; 
        // hasing can be go 10^6 in main and 10^7 in globaly
    }

    int m;
    cin>>m;
    while(m--){
        int number;
        cin>>number;
        //Output the number of times
        cout<<hash[number]<<endl;
    }
    return 0;
}
*/

/*
int main(){
    string s ;
    cin>>s;
    // pre compution
    int hash[26] = {0};
    for(int i = 0;i<s.size();i++){
        hash[s[i]-'a']++;
    }
    
   // here we use the concept of ASCII char set 
    //ASCII = american standard code for information and interchange
   // for ex = 'a' = 97
           //  'z' = 122
           //  'f' = 102     and 'f' - 'a' = 102 - 97 = 5;
           //  this concept is further use in hashing for string 
    
    // making qurie
    int c;
    cin>>c;
    while(c--){
        char m;
        cin>>m;
        cout<<hash[m-'a']<<endl;
    }
    return 0;
}*/

//Using maps
/*
In  Array hashing we have to declare its
length but in maps it will automatically
created corressponding to its value
*/

/*
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    map<int,int> mpp;
    for(int i = 0;i<n;i++){
        mpp[arr[i]]++;
    }

    //For queries 
    int c;
    cin>>c;
    while(c--){
        int number;
        cin>>number;

        // Feaching
        cout<<mpp[number]<<endl;
    }
}

*/

/*
Here the the TC is good but its avg is not good at all due to (log N);
so in most of the cases we genrally used unorderd map because its avg is 0(1) which is good but in 
wrost case its can be 0(N) due to internal collison so in that case we can use map.
*/

/*
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    unordered_map<int,int> mpp;
    for(int i = 0;i<n;i++){
        mpp[arr[i]]++;
    }

    //For queries 
    int c;
    cin>>c;
    while(c--){
        int number;
        cin>>number;

        // Feaching
        cout<<mpp[number]<<endl;
    }
}


*/

