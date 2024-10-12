#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter The Number : "<<endl;
    cin>>num;

    int arr[num];
    cout<<"Enter the elements: "<<endl;
    for(int i = 0;i<num;i++){
        cin>>arr[i];
    }

    //Sorting the array
    for(int i = 0;i<num-1;i++){
        int min = i;
        for(int j =i+1;j<num;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        int temp = arr[i];
        arr[i]=arr[min];
        arr[min] = temp;
    }

    // print the given array
    for(int i =0;i<num;i++){
        cout<<arr[i];
    }
    return 0;
}