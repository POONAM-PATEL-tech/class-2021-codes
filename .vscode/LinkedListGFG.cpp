#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

};

    void printList(Node* n){

        while(n!=NULL){
            cout<<n ->data<<" ";
            n=n ->next;
        }
        cout<<endl;
    }
    bool search(Node* n,int key){
        while(n!=NULL){
            if(n->data==key){
                return true;
                cout<<n->data;
            }
        }
        return false;
    }


int main(){
Node* head=NULL;
Node* second=NULL;
Node* third=NULL;

head =new Node();
second =new Node();
third=new Node();

head ->data=10;
head ->next=second;

second ->data=20;
second ->next=third;

third ->data=30;
third ->next=NULL;

printList(head);
cout<<search(head,20)<<endl;
return 0;
}