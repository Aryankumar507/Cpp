#include<bits/stdc++.h>
using namespace std;

int linear(int arr[],int size,int number){
 for(int i = 0;i<=size;i++){
    if(arr[i]==number){
        return i;
    }
 }
return -1;
}

void shorting(int arr[],int size){
    for(int i = 0;i<size;i++){
        for(int j = i;j<size;j++){
            if(arr[i]>arr[j+1]){
            int m;
            m = arr[i];
            arr[i] = arr[j+1];
            arr[j+1] = m;}
        }
    }
}


int binary(int arr[],int size,int number){
    int low,high;
    low = arr[0];
    high = arr[size-1];
    while(low <= high){
    int mid = (low + high)/2;
 if(arr[mid]==number){
        return mid;
    }
    if(arr[mid]>number){
        high = mid;
    }
    else{
        low = mid;
    }
    }
}

int main(){
int arr[] = {1,2,3,4,5,6,7,8,9};
int size = sizeof(arr)/sizeof(int);
int number;
cout<<"Enter the nmber : ";
cin>>number;
int ans = binary(arr,size,number);
//shorting(arr,size);
cout<<"The number "<<number<<" is at "<<ans;

return 0;
}
