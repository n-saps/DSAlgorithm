#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for (int i=1; i<n; i++){
        int curr=arr[i];
        int j=i-1;
        while(arr[j]>curr && j>=0){
            arr[j+1]=arr[j];
            j--;      
        }
        arr[j+1]=curr;
        for (int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}

void selectionSort(int arr[], int n){
    for (int i=0; i<n-1; i++){
        int min=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        if(min!=i){
            int temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
        for (int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    //insertionSort(arr, n);
    selectionSort(arr, n);
    return 0;
}