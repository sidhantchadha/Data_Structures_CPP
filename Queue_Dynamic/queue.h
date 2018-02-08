
#ifndef QUEUE_H_
#define QUEUE_H_
#include<iostream>
using namespace std;

class Queue {
private: struct ListNode {
	int value;
	ListNode *next;
};
ListNode *head;
ListNode *tail;
public:
Queue(){
	head=tail=NULL;


}
void enqueue(int);
int dequeue();
bool isEmpty();
void display();
};




#endif /* QUEUE_H_ */
