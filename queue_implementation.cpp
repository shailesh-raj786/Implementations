#include<iostream>
using namespace std;

int n = 5, cnt =  0, rear=0, front = 0;

int push(int x, int arr[]){
	if(cnt == n){
	      cout<<"Queue overflow";
	      return 0;
	}
	arr[rear%n] = x;
	rear++, cnt++;
}

void pop(int arr[]){
	if(cnt == 0){
		cout<<"Queue underflow";
		return;
	}
	arr[front%n] = -1;
	front++;
	cnt--;
}

int frontEle(int arr[]){
	if(cnt == 0){
		return -1;
	}
	return arr[front%n];
}

int size(){
	return cnt;
}

bool isEmpty(){
	if(cnt == 0){
		return true;
	}
	return false;
}

void show(int arr[]){
	for(int i=front;i<front+cnt;i++){
		cout<<arr[i%n];
	}
}

int main(){
      int arr[5];
      push(1,arr);
      push(2,arr);
      push(3,arr);
      show(arr);
      pop(arr);
      show(arr);
      cout<<frontEle(arr)<<endl;
      cout<<size()<<endl;
      cout<<isEmpty()<<endl;
}

/*
// C++ program to implement a queue using an array
#include <bits/stdc++.h>
using namespace std;

struct Queue {
	int front, rear, capacity;
	int* queue;
	Queue(int c)
	{
		front = rear = 0;
		capacity = c;
		queue = new int;
	}

	~Queue() { delete[] queue; }

	// function to insert an element
	// at the rear of the queue
	void queueEnqueue(int data)
	{
		// check queue is full or not
		if (capacity == rear) {
			printf("\nQueue is full\n");
			return;
		}

		// insert element at the rear
		else {
			queue[rear] = data;
			rear++;
		}
		return;
	}

	// function to delete an element
	// from the front of the queue
	void queueDequeue()
	{
		// if queue is empty
		if (front == rear) {
			printf("\nQueue is empty\n");
			return;
		}

		// shift all the elements from index 2 till rear
		// to the left by one
		else {
			for (int i = 0; i < rear - 1; i++) {
				queue[i] = queue[i + 1];
			}

			// decrement rear
			rear--;
		}
		return;
	}

	// print queue elements
	void queueDisplay()
	{
		int i;
		if (front == rear) {
			printf("\nQueue is Empty\n");
			return;
		}

		// traverse front to rear and print elements
		for (i = front; i < rear; i++) {
			printf(" %d <-- ", queue[i]);
		}
		return;
	}

	// print front of queue
	void queueFront()
	{
		if (front == rear) {
			printf("\nQueue is Empty\n");
			return;
		}
		printf("\nFront Element is: %d", queue[front]);
		return;
	}
};

// Driver code
int main(void)
{
	// Create a queue of capacity 4
	Queue q(4);

	// print Queue elements
	q.queueDisplay();

	// inserting elements in the queue
	q.queueEnqueue(20);
	q.queueEnqueue(30);
	q.queueEnqueue(40);
	q.queueEnqueue(50);

	// print Queue elements
	q.queueDisplay();

	// insert element in the queue
	q.queueEnqueue(60);

	// print Queue elements
	q.queueDisplay();

	q.queueDequeue();
	q.queueDequeue();

	printf("\n\nafter two node deletion\n\n");

	// print Queue elements
	q.queueDisplay();

	// print front of the queue
	q.queueFront();

	return 0;
}
*/

