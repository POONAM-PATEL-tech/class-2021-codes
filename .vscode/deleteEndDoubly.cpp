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
void insert(node* &head,int val) {
    node* newnode = ( node*) malloc(sizeof( node));
   newnode->data = val;
   newnode->prev = NULL;
   newnode->next = head;
   if(head != NULL)
   head->prev = newnode ;
   head = newnode;
}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void delEnd(node* head){
    if(head==NULL){
        cout<<"EMPTY"<<" ";
    }else{
        node* temp=head;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
            
      //  temp->prev->next=temp->next;
        
        //    temp->next->prev=temp->prev;
            delete temp->next;
            temp->next=NULL;
    }
}
int main(){
    node* head=NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    display(head);
    delEnd(head);
    display(head);


    return 0;
}