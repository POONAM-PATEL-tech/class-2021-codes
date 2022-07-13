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
    cout<<"Smallest:"<< min<<endl;
}

void largestElement( Node* head)
{
    int max = INT_MIN;
 
    while (head != NULL){
        if (max < head->data)
            max = head->data;
        head = head->next;
    }
    cout<<"Largest:"<< max<<endl;
}
void swap(Node* &head,int x,int y){
    if(x==y)
        return;
    //Search for x 
    Node* prevX=NULL;
    Node* currX=head;
    while(currX && currX->data !=x){
        prevX=currX;
        currX=currX->next;
    }
    //Search for Y
    Node* prevY=NULL;
    Node* currY=head;
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
    Node* temp = currY->next;
    currY->next = currX->next;
    currX->next = temp;
    cout<<"SWAP LINKED LIST"<<" ";
}

int main(){
    Node* head=NULL;
    insertAtHead(head,1);
    insertAtHead(head,2);
    insertAtHead(head,3);
    display(head);
    smallestElement(head);
    largestElement(head);
    swap(head,3,1);
    display(head);
    return 0;

}