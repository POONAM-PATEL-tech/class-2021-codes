#include <iostream>
#define SIZE 5
using namespace std;
class Queue{
    private:
    int items[SIZE],front,rear;
    public:
    Queue(){
        front=-1;
        rear=-1;
    }

    bool isFull(){
        if(front==0 && rear==SIZE-1){
            return true;
        }
        return false;
    }
    bool isEmpty(){
        if(front==-1)
        return true;
        else
            return false;
        
    }
    void enQueue(int element){
        if(isFull()){
           cout<<"Queue is Full";
        }else{
            if(front==-1)
            front=0;
            rear++;
            items[rear]==element;
            cout<<endl<<"inserted"<<element<<endl;
        }
    }
    void queueFront()
    {
        if (front == rear) {
            printf("\nQueue is Empty\n");
            return;
        }
        printf("\nFront Element is: %d", items[front]);
        return;
    }

    int deQueue(){
        int element;
        if(isEmpty()){
            cout<<"Queue is Empty"<<endl;
            return(-1);
        }else{
            element=items[front];
            if(front>=rear){
                front=-1;
                rear=-1;
            }else{
                front++;
            }
            cout<<endl<<"Deteted->"<<element<<endl;
            return element;
        }
    }
       /* void queueFront()
    {
        if (front == rear) {
            printf("\nQueue is Empty\n");
            return;
        }
        printf("\nFront Element is: %d", items[front]);
        return;
    }*/
    void display(){
        int i;
        if(isEmpty()){
            cout<<endl<<"Empty Queue"<<endl;
        }else{
            cout<<endl<<"Front index->"<<front;
            cout<<endl<<"Items->";
            for(i=0;i<=rear;i++)
            cout<<items[i]<<" ";
            cout<<endl;
            cout<<'Rear Index->'<<rear<<endl;
        }
    }

};


int main(){
    Queue q=Queue();

    q.enQueue(5);
    q.display();
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    q.enQueue(5);
    //cout<<q.peek();
    q.queueFront();
    q.deQueue();
    q.deQueue();
   q.deQueue();
   q.deQueue();
   q.display();

    return 0;
}