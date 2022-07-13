#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct QNode{
    public:
    int data;
    QNode* next;

    QNode(int val){
        data=val;
        next=NULL;

    }

};
struct Queue{
    public:
    QNode *front,*rear;
    Queue(){
        front =rear=NULL;
    }
    bool isEmpty(){
        if(front==NULL && rear==NULL)
        return true;
        else
        return false;
    }

    void enQueue(int val){
        QNode *temp=new QNode(val);
        if(isEmpty()){
            front=rear=temp;
            return ;
        }
        rear->next=temp;
        rear=temp;
    }
    void deQueue(){
        if(front==NULL)
        return;

        QNode *temp=front;
        front=front->next;

        if(front==NULL)
        rear=NULL;

        delete(temp);
        
    }
    void display(){
        if(isEmpty()){
            cout<<"Queue is Empty"<<endl;
        }
        else{
            QNode *ptr=front;
            while(ptr!=NULL){
                cout<<ptr->data<<" "<<endl;
                ptr=ptr->next;
            }
        }
            
            
        
    }

};
int main(){
    Queue q;
    q.enQueue(1);
    q.enQueue(2);
    q.display();
    cout<<"Front:"<<(q.front)->data<<endl;
    cout<<"Rear:"<<(q.rear)->data<<endl;
    q.deQueue();
    cout<<"Front:"<<(q.front)->data<<endl;
    cout<<"Rear:"<<(q.rear)->data<<endl;
    q.display();
    q.deQueue();
    q.display();
    
    return 0;
}