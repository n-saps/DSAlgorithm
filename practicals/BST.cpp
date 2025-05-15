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

Node* insert(Node *root, int val){
    if(root==NULL){
        return new Node(val);
    }
    if(val < root->data){
        root->left=insert(root->left, val);
    }
    else{
        //val> root->data
        root->right=insert(root->right, val);
    }
    return root;
}

void printInorder(Node* root){
    if(root==NULL){
        return;
    }
    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}

int main(){
    Node* root=NULL;
    root=insert(root, 5);
    insert(root, 1);
    insert(root, 3);
    insert(root, 4);
    insert(root, 2);
    insert(root, 7);
    printInorder(root);

    return 0;
    
}