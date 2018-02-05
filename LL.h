/*
 * LL.h
 *
 *  Created on: Feb 3, 2018
 *      Author: Sidhant Chadha
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
};




#endif /* LL_H_ */
