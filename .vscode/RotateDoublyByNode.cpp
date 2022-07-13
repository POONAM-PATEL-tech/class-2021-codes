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
void rotate(node* &head,int N){
    if(N==0)
    return;
    node* current=head;

    int count=1;
    while(count<N && current!=NULL){
        current=current->next;
        count++;
    }
    if(current==NULL)
    return;
    

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
    display(head);


    return 0;
}