// C or C++ program for insertion and
// deletion in Circular Queue
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Queue
{
	// Initialize front and rear
    public:
	int rear, front;

	// Circular Queue
	int size;
	int *arr;

	Queue(int s)
	{
	front = rear = -1;
	size = s;
	arr = new int[s];
	}

	void enQueue(int value);
	int deQueue();
	void displayQueue();
};
void Queue::enQueue(int value)
{
	if ((front == 0 && rear == size-1) ||
			(rear == (front-1)%(size-1)))
	{
		cout<<"Queue is Full";
		return;
	}

	else if (front == -1) 
	{
		front = rear = 0;
		arr[rear] = value;
	}

	else if (rear == size-1 && front != 0)
	{
		rear = 0;
		arr[rear] = value;
	}

	else
	{
		rear++;
		arr[rear] = value;
	}
}


int Queue::deQueue()
{
	if (front == -1)
	{
cout<<"Queue is Empty";
		return INT_MIN;
	}

	int data = arr[front];
	arr[front] = -1;
	if (front == rear)
	{
		front = -1;
		rear = -1;
	}
	else if (front == size-1)
		front = 0;
	else
		front++;
     
	return data;
}


void Queue::displayQueue()
{
	if (front == -1)
	{
		cout<<"Queue is Empty";
		return;
	}
	cout<<"Elements in Circular Queue are: ";
	if (rear >= front)
	{
		for (int i = front; i <= rear; i++)
			cout<<arr[i]<<" ";
	}
	else
	{
		for (int i = front; i < size; i++)
			cout<< arr[i]<<" ";

		for (int i = 0; i <= rear; i++)
			cout<< arr[i];
	}
}


int main()
{
	Queue circular(5);


	circular.enQueue(1);
	circular.enQueue(2);
	circular.enQueue(3);
	circular.enQueue(-4);

	
	circular.displayQueue();

	
	cout<< circular.deQueue()<<endl;
	cout<< circular.deQueue()<<endl;

	circular.displayQueue();

	circular.enQueue(5);
	circular.enQueue(6);
	circular.enQueue(7);

	circular.displayQueue();

	circular.enQueue(20);
	return 0;
}
