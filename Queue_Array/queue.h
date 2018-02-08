
#ifndef QUEUE_H_
#define QUEUE_H_
#include<iostream>
using namespace std;

class Queue {
private: static const int queuesize=100;
int queueArray[queuesize];
int front;
int rear;
int numItems;
public:
Queue() {
	front=0;
	rear=-1;
	numItems=0;
}
void enqueue(int);
int dequeue();
bool isEmpty();
bool isFull();
void display();
};




#endif /* QUEUE_H_ */
