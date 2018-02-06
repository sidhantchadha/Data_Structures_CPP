/*
 * LL.h
 *
 *  Created on: Feb 3, 2018
 *      Author: Powerlifter
 */

#ifndef LL_H_
#define LL_H_

#include <iostream>
using namespace std;

class NumberList {
private:
	struct ListNode {
		int value;
		ListNode *next;
	};
	ListNode *head;
public:
	NumberList() {
		head=NULL;
	}
	~NumberList();
	void appendNode(int);
	void display();
	void deleteNode(int);
	void insertNode(int);
	void reverseList();
	int getSize();
	bool isEmpty();
	void valueAt(int);
	void pushFront(int);
	void popFront();
	void popBack();
	void getFrontValue();
	void getLastValue();
	void insertAtPosition(int,int);
	void deleteAtPosition(int);
};




#endif /* LL_H_ */
