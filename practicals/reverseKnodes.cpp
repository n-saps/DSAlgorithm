#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};

void insertAtTail(node* &head, int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

node* reverseK(node* &head, int k){
    node* prev=NULL;
    node* curr=head;
    node* nextt;

    int count=0;
    while(curr!=NULL && count<k){
        nextt=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextt;
        count++;
    }
    if(nextt!=NULL){
        head->next=reverseK(nextt,k);
    }
    return prev;
}

int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    display(head);
    node* newhead=reverseK(head,2);
    display(newhead);
}