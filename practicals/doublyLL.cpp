#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* prev;
    node* next;

    node(int val){
        data=val;
        prev=NULL;
        next=NULL;
    }
};

void insertAtHead(node* &head, int val){
    node* n=new node(val);
    n->next=head;
    if(head!=NULL){
        head->prev=n;
    }
    head=n;
}

void insertAtTail(node* &head, int val){
    if(head==NULL){
        insertAtHead(head, val);
        return ;
    }

    node* n=new node(val);
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void deletion(node* &head, int pos){
    if(pos==1){
        node* todelete=head;
        head=head->next;
        head->prev=NULL;
        delete todelete;
        return;
    }
    node* temp=head;
    int count=1;
    while(temp!=NULL && count!=pos){
        temp=temp->next;
        count++;
    }
    if(temp->next!=NULL){
        temp->next->prev=temp->prev;
    }
    temp->prev->next=temp->next;
    delete temp;
}

int main(){
    node* head=NULL;
    insertAtTail(head,6);
    insertAtTail(head,23);
    insertAtTail(head,5);
    insertAtTail(head,8);
    insertAtTail(head,6);
    insertAtTail(head,7);
    display(head);
    //deletion(head,3);
    //deletion(head,1);
    //display(head);
    return 0;
}