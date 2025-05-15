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

bool isBST(Node* root, Node* min=NULL, Node* max=NULL){
    if(root==NULL){
        return true;
    }
    if(min!=NULL && root->data<=min->data){
        return false;
    }
    if(max!=NULL && root->data>=max->data){
        return false;
    }

    bool leftValid=isBST(root->left, min, root);
    bool rightValid=isBST(root->right, root, max);
    return leftValid and rightValid;
}

int main(){
    Node* root=new Node(4);
    root->left=new Node(3);
    root->right=new Node(5);

    cout<<isBST(root, NULL, NULL);
}