#include <bits/stdc++.h> 
using namespace std;

//SELECTION SORT
// int main(){
//     int arr[]={4,5,8,1};
//     int n=4;
//     int min_idx;
//     for(int i=0; i<n-1; i++){
//         min_idx=i;
//         for(int j=i+1; j<n; j++){
//             if(arr[j]<arr[min_idx]){
//                 min_idx=j;
//             }
//             if(min_idx!=i){
//                 int temp=arr[i];
//                 arr[i]=arr[min_idx];
//                 arr[min_idx]=temp;
//             }
//         }
//         for(int i=0; i<n; i++){
//             cout<<arr[i]<<" ";
//         }cout<<endl;
//     }
// }

// BUBBLE SORT
// int main(){
//     int arr[]={4,5,8,1};
//     int n=4;

//     int counter=0;
//     while(counter<n-1){
//         for(int i=0; i<n-counter; i++){
//             if(arr[i]>arr[i+1]){
//                 int temp=arr[i];
//                 arr[i]=arr[i+1];
//                 arr[i+1]=temp;
//             }
//         }
        
//         counter++;
//         for(int i=0; i<n; i++){
//             cout<<arr[i]<<" ";
//         }cout<<endl;
//     }

//     return 0;
    
// }