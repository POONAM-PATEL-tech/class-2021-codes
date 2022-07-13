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
void setnode(node* &head,int val){
	node* n=new node(val);
	n->next=head;
	head=n;
}
void display(node* head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
	cout<<endl;

}
void reverse(node* head){
    node* prev=NULL;
    node* curr=head;
    node* next=NULL;

    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        
    }
    
    head=prev;
    cout<<"Reverse Linked List"<<" ";
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
	
}
int main(){
	node* head=NULL;
	for(int i=5;i>0;i--){
		setnode(head,i);
		
	}
	display(head);
    reverse(head);
    



































    
	
	


	return 0;
}

