#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

};
int main(){
    Node* p=NULL;
    Node* q=p;
    p=new Node();
    p ->data=10;
    p ->next=new Node();
    q=p ->next;
    q ->data=20;
    q ->next=new Node();
    p=q ->next;
    
    p ->data=30;
    p ->next=new Node();
    q=p ->next;
    q ->data=40;
    q ->next=NULL;
    
    while(q!=NULL){
       cout<<q ->data;
       q=q ->next;
    }

    return 0;

}