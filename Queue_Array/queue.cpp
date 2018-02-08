#include<iostream>
#include<cassert>
#include "queue.h"
using namespace std;

void Queue::enqueue(int num) {
	rear=(rear+1) % queuesize;
	queueArray[rear]=num;
	numItems++;
}

int Queue::dequeue() {

	int val=queueArray[front];
	front=(front+1) % queuesize;
	numItems--;
	return val;
}

bool Queue::isEmpty() {
	return (numItems==0);
}

bool Queue::isFull() {
	return (numItems==queuesize);
}

void Queue::display() {
	for(int i=front;i<=rear;i++) {
		cout<<queueArray[i]<<endl;
	}
}
