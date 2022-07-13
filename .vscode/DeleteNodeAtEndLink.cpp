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
void delEnd(node* head){
    if(head==NULL){
        cout<<"EMPTY"<<" ";
    }else{
        node* temp=head;
        while(temp->next->next!=NULL){
            temp=temp->next;
          }
          delete (temp->next);
          temp->next=NULL;
          while(head!=NULL){
              cout<<head->data<<" ";
              head=head->next;
          }
          
    }         
    
}
int main(){
	node* head=NULL;
	for(int i=5;i>0;i--){
		setnode(head,i);
		
	}
	display(head);
    delEnd(head);

	return 0;
}

