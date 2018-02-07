
#ifndef STACK_H_
#define STACK_H_
#include<iostream>
using namespace std;

class Stack {
private: struct ListNode {
	int value;
	ListNode *next;
};
	ListNode *head;
public:
	Stack() {
		head=NULL;
	}
	void push(int);
	int pop();
	bool isEmpty();
//	bool isFull(); ----> Not required because this is dynamic allocation.
	void display();

};




#endif /* STACK_H_ */
