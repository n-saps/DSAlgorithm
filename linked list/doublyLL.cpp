#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};

void insertAtHead(Node* &head, int val){
    Node* node= new Node(val);
    node->next=head;
    if(head!=NULL){
        head->prev=node;
    }
    head=node;
}

void insert(Node* &head, int val){
    
    if(head==NULL){
        insertAtHead(head, val);
        return;
    }
    Node* node= new Node(val);
    Node* temp=head;
    while(head->next!=NULL){
        temp=temp->next;
    }
    temp->next=node;
    node->prev=temp;

}

void display(Node* head){
    Node* temp1=head;
    while(temp1!=NULL){
        cout<<temp1->data<<" ";
        temp1=temp1->next;
    }
    cout<<endl;
}

int main(){
    Node* head=NULL;
    insert(head, 1);
    insert(head, 2);
    display(head);
    insert(head, 5);
    display(head);
    insert(head, 4);
    insert(head, 5);
    
    display(head);
    return 0;
}