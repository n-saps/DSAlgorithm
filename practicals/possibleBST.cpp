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

vector<Node*> constructTrees(int start, int end){
    vector<Node*> trees;
    if(start > end){
        trees.push_back(NULL);
        return trees;
    }

    for(int i=start; i<=end; i++){
        vector<Node*> leftsubtree=constructTrees(start, i-1);
        vector<Node*> rightsubtree=constructTrees(i+1, end);

        for(int j=0; j<leftsubtree.size(); j++){
            Node* left=leftsubtree[j];
            for(int k=0; k<rightsubtree.size(); k++){
                Node* right=rightsubtree[k];
                Node* node=new Node(i);
                node->left=left;
                node->right=right;
                trees.push_back(node);
            }
        }
    }
    return trees;
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
    vector<Node*> totalTrees=constructTrees(1, 3);
    for(int i=0; i<totalTrees.size(); i++){
        cout<< i+1<<" : ";
        preorderPrint(totalTrees[i]);
        cout<<endl;
    }

    return 0;
}