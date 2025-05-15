#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=NULL;
    }
};

int lenLL(Node* head){
    if(head==NULL) return -1;
    if(head->next==NULL) return 1;
    return 1+lenLL(head->next);
}

int main(){
    Node* head=new Node(6);
    head->next=new Node(1);
    head->next->next=new Node(2);
    head->next->next->next=new Node(3);
    cout<<lenLL(head);
}