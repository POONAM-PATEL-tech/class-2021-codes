#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=NULL;        
    }
};
    void insertAtHead(Node*&head,int val){
        Node* n=new Node(val);
        
        n->next=head;
        head=n;
    }
    void display(Node* head){
        int count=0;
        Node* temp=head;
        while(temp!=NULL){
            count++;
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
        cout<<count<<endl;
    }


void smallestElement( Node* head)
{
    int min = INT_MAX;

    while (head != NULL) {
        if (min > head->data)
            min = head->data;
 
        head = head->next;
    }
    cout<< min;
}




int main(){
    Node* head=NULL;
    insertAtHead(head,1);
    insertAtHead(head,2);
    insertAtHead(head,3);
    display(head);
    smallestElement(head);
    return 0;

}