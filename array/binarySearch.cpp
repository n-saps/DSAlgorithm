#include<iostream>
using namespace std;

int binarySearch(int arr[], int st, int en, int ele){
    int mid=(st+en)/2;
    if(arr[mid]==ele){
        return mid;
    }
    if(st > en){
        return -1;
    }
    if(ele>arr[mid]){
        binarySearch(arr, mid+1, en, ele);
    }else{
        binarySearch(arr, st, mid-1, ele);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    int a=binarySearch(arr, 0, n-1, 5);
    cout<<a;

    return 0;
}