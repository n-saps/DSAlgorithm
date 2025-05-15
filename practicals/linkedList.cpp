#include<iostream>
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
        return ;
    }

    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;

}

void insertAtHead(node* &head, int val){
    node* n=new node(val);
    n->next=head;
    head=n;

}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void deletion(node* &head, int val){
    
    if(head==NULL){
        return;
    }
    if(head->next=NULL){
        node* todelete=head;
        head=head->next;
        delete todelete;
    }
    node* temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;

    delete todelete;
}

int main(){
    node* head=NULL;
    insertAtHead(head,1);
    insertAtHead(head,2);
    insertAtHead(head,1);
    display(head);
    insertAtHead(head,3);
    display(head);
    deletion(head,2);
    display(head);

    return 0;
}