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
}
void delHead(node* head){
    if(head==NULL){
        cout<<"EMPTY"<<" ";
    }else{
        node* temp=head;
        head=head->next;
        head->prev=NULL;
	
        delete temp;
        cout<<"head deleted"<<endl;
        while(head!=NULL){
            cout<<head->data<<" ";
            head=head->next;
        }
        
    }
}
int main(){
    node* head=NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    display(head);
    delHead(head);


    return 0;
}