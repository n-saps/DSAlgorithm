#include<iostream>
using namespace std;

// class node{
//     public:
//     int data;
//     node* left;
//     node* right;

//     node(int val){
//         data=val;
//         left=NULL;
//         right=NULL;
//     }
// };

// void inorderPrint(node* root){
//     if(root==NULL){
//         return;
//     }
//     inorderPrint(root->left);
//     cout<<root->data<<" ";
//     inorderPrint(root->right);
// }

// int search(int inorder[], int start, int end, int curr){
//     for(int i=start; i<=end; i++){
//         if(inorder[i]==curr){
//             return i;
//         }
//     }
//     return -1;
// }

// node* buildTree(int preorder[], int inorder[], int start, int end){
//     static int idx=0;
//     int curr=preorder[idx];
//     idx++;

//     node* n=new node(curr);

//     if(start==end)
//         return n;

//     int pos=search(inorder, start, end, curr);
//     n->left=buildTree(preorder, inorder, start, pos-1);
//     n->right=buildTree(preorder, inorder, pos+1, end);
//     return n;

// }

// int main(){
//     int preorder[]={1,2,4,3,5};
//     int inorder[]={4,2,1,5,3};

//     node* root=buildTree(preorder, inorder, 0,4);
//     inorderPrint(root);
//     return 0;
// }

// class Node{
//     public:
//     int data;
//     Node* left; 
//     Node* right;

//     Node(int val){
//         data = val;
//         left = NULL;
//         right = NULL;
//     }
// };

// int search(int inorder[], int start, int end, int curr){
//     for(int i = start; i <= end; ++i){
//         if(inorder[i] == curr){
//             return i;
//         } 
//     }
//     return -1;
// }

// Node* buildtree(int preorder[], int inorder[], int start, int end){
//     static int idx = 0;
//     if(start>end){
//         return NULL;
//     }
//     int curr = preorder[idx];
//     idx++;
//     Node* node = new Node(curr);
//     /*if(start == end){
//         return node;
//     }*/
//     int pos = search(inorder, start, end, curr);
//     node->left = buildtree(preorder, inorder, start, pos-1);
//     node->right = buildtree(preorder, inorder, pos+1, end);
//     return node;
// }
// void inorderprint(Node* root){
//     if(root == NULL){
//         return;
//     }
//     inorderprint(root->left);
//     cout<<root->data<<" ";
//     inorderprint(root->right);
// }

// int main(){
//     //node* root = new node(1);
//     int preorder[]  = {1, 2, 4, 3, 5};
//     int inorder[] = {4, 2, 1, 5, 3};
//     Node* root = buildtree(preorder, inorder, 0, 4);
//     inorderprint(root);
//     return 0;
// }

class node{
    public: 
    int data;
    node* left;
    node* right;

    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

int search(int inorder[], int start, int end, int curr){
    for(int i=start; i<=end; i++){
        if(inorder[i]==curr) return i;
    }
    return -1;
}

node* bulidTree(int preorder[], int inorder[], int start, int end){
    static int idx =0;
    if (start>end) return NULL;
    int curr=preorder[idx];
    idx++;
    node* n=new node(curr);
    if(start==end) return n;

    int pos=search(inorder, start, end, curr);
    n->left=bulidTree(preorder, inorder, start, pos-1);
    n->right=bulidTree(preorder, inorder, pos+1, end);
    return n;
}



void inorderPrint(node* root){
    if(root==NULL) return;

    inorderPrint(root->left);
    cout<<root->data<<" ";
    inorderPrint(root->right);
}

int main(){
    int preorder[]={1,2,4,3,5};
    int inorder[]={4,2,1,5,3};

    node* root=bulidTree(preorder, inorder, 0, 4);
    inorderPrint(root);

    return 0;
}