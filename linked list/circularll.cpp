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

void insert(Node* &head, int val){
    if(head==NULL){
        Node* n= new Node(val);
        n->next=n;
        head=n;
        return;
    }
    Node* n= new Node(val);
    Node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
}

void display(Node* head){
    Node* temp=head;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=head);
}

int main(){
    Node* head=NULL;
    insert(head,1);
    insert(head,2);
    display(head);
    insert(head, 3);
    insert(head, 4);
    display(head);
}