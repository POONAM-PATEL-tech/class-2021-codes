#include<iostream>
using namespace std;
#include<cmath>
using namespace std;

struct Node{
    int data;            //declare node of linked list
    struct Node* next;     //Declare link node
    Node(int val){
        data = val;
    }
};

class NewStack{
    struct Node *head;
    int size;
    public:
        // Constructor for initializing the stack object
        NewStack(){
            head = NULL;
            size = 0;
        }

        void push(int val){
            Node* newLink = new Node(val);
            newLink->next = head; // newLink --> old first
            head = newLink; // first --> newLink
            cout<<val<<" pushed to stack"<<endl;
            size++;
        }

        int pop(){
            if(isEmpty()){
                cout<<"Underflow"<<endl;
                return -1;
            }else{
                size--;
                int temp = head->data;
                head = head->next;
                cout<<temp<<" popped from the stack"<<endl;
                return temp;
            }
        }

        bool isEmpty(){
            return head == NULL;
        }
        int peek()
{
     
    // Check for empty stack
    if (!isEmpty()){
    cout<<"The top element"<<" "<<head->data<<endl;
        return head->data;
    }
    else{
        exit(1);
    }
}
   

};


int main() {
NewStack *theStack = new NewStack();
    int temp;
    theStack->push(1);
    theStack->peek();
    theStack->push(3);
    theStack->peek();
    temp = theStack->pop();
    theStack->peek();
    theStack->push(4);
    theStack->peek();
    temp=theStack->pop();
    theStack->peek();
    temp=theStack->pop();
    theStack->peek();
    temp=theStack->pop();
    theStack->peek();
    
}