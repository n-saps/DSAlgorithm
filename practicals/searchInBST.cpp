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

Node* searchInBST(Node* root, int key){
    if(root==NULL){
        return NULL;
    }
    if(root->data==key){
        return root;
    }
    if(key < root->data){
        return searchInBST(root->left, key);
    }
    return searchInBST(root->right, key);
}

int main(){
    Node* root=new Node(5);
    root->left=new Node(1);
    root->right=new Node(7);
    root->left->right=new Node(3);
    root->right->left=new Node(6);
    root->right->right=new Node(8);

    if(searchInBST(root, 6)==NULL){
        cout<<"key dosent exist";
    }else{
        cout<<"key exists";
    }

    return 0;
}