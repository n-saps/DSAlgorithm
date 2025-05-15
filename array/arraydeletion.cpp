#include<iostream>
using namespace std;

void del(int arr[], int ele, int n){
    int i;
    for (i=0; i<n; i++){
        if(arr[i]==ele){
            break;
        }
    }
    for (int j=i; j<(n-1); j++){
        arr[j]=arr[j+1];
    }
    for (int i=0; i<n; i++){
        cout<<arr[i];
    }
}

int main(){
    
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    del(arr, 5,n);

    return 0;
}