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
};


int main(){
    Queue q=Queue();

    q.enQueue(1);
    q.enQueue(2);

    return 0;
}