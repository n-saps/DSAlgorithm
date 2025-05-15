#include<bits/stdc++.h>
using namespace std;

struct Node{
    public:
    int data;
    struct Node* right;
    struct Node* left;

    Node(int val){
        data=val;
        right=NULL;
        left=NULL;
    }
};

void postorder(struct Node* root){
    // postorder(root->left);
    // postorder(root->right);
    // cout<<root->data<<" ";
    stack<Node*> s;
    Node* temp=root;
    while(temp!=NULL || s.empty()==false){
        s.push(temp);
        if(temp->left){
            s.push(temp->left);

        }if(temp->right){
            s.push(temp->right);
        }
    }
    while(!s.empty()){
        Node* t=s.top();
        cout<<t->data<<" ";
        s.pop();
    }
}

int countLeaf(Node* root){
    if(root==NULL)  return 0;
    if(root->left== NULL && root->right==NULL)  return 1;
    else{
        return countLeaf(root->left)+countLeaf(root->right);
    }
}

int count(Node* root){
    if(root==NULL) return 0;
    return count(root->left)+count(root->right)+1;
}

void inorder(Node* root){
    stack<Node*> s;
    Node* temp=root;
    while(temp!=NULL || s.empty()==false){
        while(temp!=NULL){
            s.push(temp);
            temp=temp->left;
        }
        temp=s.top();
        s.pop();
        cout<<temp->data<<" ";
        temp=temp->right;
    }
}

int searching(Node* root, int ele){
    //if(root==NULL) return -1;
    if(root->data==ele) return 1;
    searching(root->left, ele);
    searching(root->right, ele);

}

void preorder(Node* root){
    stack<Node*> s;
    s.push(root);
    
    while(s.empty()==false){
        Node* temp=root;
        cout<<temp->data<<" ";
        s.pop();
        if(temp->right){
            s.push(temp->right);
        }
        if(temp->left){
            s.push(temp->left);
        }
        

    }
}

int main(){
    struct Node* root= new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->left->left=new Node(8);
    root->left->right=new Node(5);
    root->left->right->right=new Node(10);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    root->right->left->right=new Node(11);
    root->right->right->left=new Node(12);

    // cout<<countLeaf(root)<<endl;
    // cout<<count(root);
    // inorder(root);
    // preorder(root);
    postorder(root);
    // cout<<searching(root, 8);
    // postorder(root);
}