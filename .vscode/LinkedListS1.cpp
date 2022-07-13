#include <iostream>
using namespace std;
class Node{
    public:
    int data; //data
    Node* next; 
    
     //Pointer
};

int main(){
    Node* p=NULL;
    Node* q=p;
    p=new Node();
    p ->data=10;
    p ->next=new Node();
    q=p ->next;
    q ->data=20;
    q ->next=NULL;
     cout<<p ->data;
    while(q!=NULL){
        cout<<q ->data;
        q= q->next;
    }
    return 0;
}