#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }

};
void insertBeg(node* &head,int val) {
    node* newnode = new node(val);
   //newnode->data = val;
   newnode->prev = NULL;
   newnode->next = head;
   if(head != NULL)
   head->prev = newnode ;
   head = newnode;
}
void insertTail(node* &head,int val){
    node* newnode=new node(val);
    while(head->next!=NULL){
        head=head->next;
    }
    head->next=newnode;
    newnode->prev=head;
}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    node* head=NULL;
    insertBeg(head,1);
    insertBeg(head,2);
    insertBeg(head,3);
    display(head);
    insertTail(head,1);
    insertTail(head,2);
    display(head);


    return 0;
}