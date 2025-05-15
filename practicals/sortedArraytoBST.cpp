#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

Node* sortedArraytoBST(int arr[], int start, int end){
    if(start > end){
        return NULL;
    }
    int mid=(start+end)/2;
    Node* root=new Node(arr[mid]);

    root->left=sortedArraytoBST(arr, start, mid-1);
    root->right=sortedArraytoBST(arr, mid+1, end);

    return root;
}

void preorderPrint(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorderPrint(root->left);
    preorderPrint(root->right);
}


int main(){
    int arr[]={10, 20, 30, 40, 50};

    Node* root=sortedArraytoBST(arr, 0, 4);
    preorderPrint(root);

    return 0;
}