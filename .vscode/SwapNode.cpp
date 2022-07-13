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

void push(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}
void print(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

void swap(node* &head,int x,int y){
    if(x==y)
        return;
    //Search for x 
    node* prevX=NULL;
    node* currX=head;
    while(currX && currX->data !=x){
        prevX=currX;
        currX=currX->next;
    }
    //Search for Y
    node* prevY=NULL;
    node* currY=head;
    while(currY && currY->data!= y){
        prevY=currY;
        currY=currY->next;
    }
    //if x or y not present;
    if(currX==NULL || currY==NULL)
        return;
         // If x is not head of linked list
    if (prevX != NULL)
        prevX->next = currY;
    else // Else make y as new head
        head = currY;
 
    // If y is not head of linked list
    if (prevY != NULL)
        prevY->next = currX;
    else // Else make x as new head
        head = currX;
 
    // Swap next pointers
    node* temp = currY->next;
    currY->next = currX->next;
    currX->next = temp;
}
    

int main(){
    node* head=NULL;
    push(head,1);
    push(head,2);
    push(head,3);
    push(head,4);
    push(head,5);

    print(head);
    swap(head,2,4);
    print(head);
    return 0;
}