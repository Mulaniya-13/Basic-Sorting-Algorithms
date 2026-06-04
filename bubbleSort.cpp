#include<iostream>
using namespace std;

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubbleSort(int arr[],int n){
    for (int i=0;i<n;i++){
        bool isSwap=false;
        cout<<"outer loop";
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                bool isSwap=true;
                cout<<"inner loop";
            }
        }
        if(!isSwap){
            //array is already sorted
            return;
        }
    }
    print(arr,n);
}

int main(){
    // int arr[]={5,4,1,3,2};
    int arr[10]={1,2,3,4,5,6,7,8,10};
    int n=sizeof(arr)/sizeof(int);
    bubbleSort(arr,n);
    cout<<endl;
    return 0;
}