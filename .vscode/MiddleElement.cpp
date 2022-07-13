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
void middle(node* head){
	node* ptr1=head;
	node* ptr2=head;
	if(head==NULL){
		cout<<"List is empty";
	}else{
		while(ptr1!=NULL && ptr2->next!=NULL){
			ptr1=ptr1->next;
			ptr2=ptr2->next->next;

		}
		cout<<"Middle Element :"<<ptr1->data<<endl;
	}
}
int main(){
	node* head=NULL;
	for(int i=5;i>0;i--){
		setnode(head,i);
		
	}
	display(head);
	middle(head);
	


	return 0;
}

