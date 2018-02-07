
#include "stack.h"
#include<iostream>
#include<cassert>
using namespace std;

void Stack::push(int num) {

	ListNode *newNode=new ListNode;
	newNode->value=num;
	ListNode *p=head;

	head=newNode;
	newNode->next=p;

}

void Stack::display() {

	ListNode*p=head;
	while(p) {
		cout<<p->value<<endl;
		p=p->next;
	}
}

int Stack::pop() {

	assert(!isEmpty());
	ListNode *p=head;
	int numpop=p->value;
	head=p->next;
	delete p;
	return numpop;
}

bool Stack::isEmpty() {
	return (head==NULL);
}

