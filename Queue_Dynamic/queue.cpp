#include<iostream>
#include<cassert>
#include "queue.h"
using namespace std;

void Queue::enqueue(int num) {
	ListNode *newNode=new ListNode;
	newNode->value=num;
	newNode->next=NULL;


	if(isEmpty()) {

		head=tail=newNode;
	}
	else {
		tail->next=newNode;
		tail=newNode;
	}
}

void Queue::display() {
	ListNode *p=head;
	while(p) {
		cout<<p->value<<endl;
		p=p->next;
	}
}

bool Queue::isEmpty() {
	return (head==NULL);
}

int Queue::dequeue() {

	assert(!isEmpty());
	ListNode *p=head;
	int dval=p->value;
	head=p->next;
	delete p;
	return dval;
}
