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

    //using bubble sort
    int counter = 0;
    while(counter<num){
      for(int i = 0;i<(num-counter);i++){
        if(arr[i]>arr[i+1]){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1]=temp;
        }
      }
      counter++;
    }

     for(int i =0;i<num;i++){
        cout<<arr[i];
    }
    return 0;
}
