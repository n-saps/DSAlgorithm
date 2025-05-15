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
    return;
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

node* appendKnodes(node* &head, int pos){
    node* temp=head;
    int l=0;
    while(temp!=NULL){
        temp=temp->next;
        l++;
    }
    node* newhead;
    node* newtail;
    node* tail=head;
    int count=1;
    while(tail->next!=NULL){
        if(count==l-pos){
            newtail=tail;
        }
        if(count==l-pos+1){
            newhead=tail;
        }
        tail=tail->next;
        count++;
    }
    newtail->next=NULL;
    tail->next=head;
    return newhead;
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
    node* newHead=appendKnodes(head,4);
    display(newHead);
    return 0;
}