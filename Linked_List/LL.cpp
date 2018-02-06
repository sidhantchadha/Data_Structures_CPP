/*
 * LL.cpp
 *
 *  Created on: Feb 3, 2018
 *      Author: Powerlifter
 */

#include "LL.h"
#include <iostream>
#include <cstddef>
using namespace std;

void NumberList::appendNode(int num) {

	ListNode *newNode = new ListNode;
	newNode->value=num;
	newNode->next=NULL;

	if(head==NULL)
		head=newNode;
	else {
		ListNode *p=head;
		while(p->next) {
			p=p->next;
		}
		p->next=newNode;

	}

}

void NumberList::display() {

	ListNode *p=head;
	while(p) {
		cout<<p->value<<endl;
		p=p->next;
	}
}


NumberList::~NumberList(){

	ListNode *p=head;
	ListNode *n;

	while(p) {
		n=p->next;
		delete p;
		p=n;
	}
}

void NumberList::deleteNode(int val) {

	ListNode *p=head;
	ListNode *n;
	while(p && p->value!=val) {
		n=p;
		p=p->next;
	}

	if(p) {
		if(p==head) {
			head=p->next;
			delete p;
		}
		else {
			n->next=p->next;
			delete p;
		}

	}
}

void NumberList::insertNode(int val) {
	ListNode *newNode=new ListNode;
	newNode->value=val;
	ListNode *p=head;
	ListNode *n;

	while(p && p->value<val) {
		n=p;
		p=p->next;
	}

	if(p==head) {
		head=newNode;
		newNode->next=p;
	}
	else {
		n->next=newNode;
		newNode->next=p;
	}
}

void NumberList::reverseList() {
	ListNode *n,*p,*q;				//pointer to previous, current, next node//
	n=NULL;
	p=head;

	while(p) {
		q=p->next;
		p->next=n;
		n=p;
		p=q;
	}
	head=n;
	}

int NumberList::getSize() {
	ListNode *p=head;
	int count=0;
	if(head==NULL)
		return count;
	else {
			while(p) {
				count++;
				p=p->next;
			}

			return count;

	}
}

bool NumberList::isEmpty() {
	if(head==NULL)
		return true;
	else
		return false;
}

void NumberList::valueAt(int index) {
	ListNode *p=head;
	int count=0;
	int valueat;
	if(head==NULL || index>getSize())
		cout<<"List has no element at index "<<index<<endl;
	else {
			while(p && count!=index) {
				count++;
				valueat=p->value;
				p=p->next;
			}
			cout<<"The value at index "<<count<<" is "<<valueat<<endl;
	}

}

void NumberList::pushFront(int num) {
	ListNode *newNode=new ListNode;
	newNode->value=num;
	ListNode *p=head;

	if(head==NULL) {
		head=newNode;
		newNode->next=NULL;
	}
	else {
		head=newNode;
		newNode->next=p;
	}
}

void NumberList::popFront() {

	ListNode *p=head;

	if(head==NULL)
		cout<<"List is empty! Nothing to pop."<<endl;
	else {
		head=p->next;
		delete p;
	}
}

void NumberList::popBack() {

	ListNode *p=head;
	ListNode *n;
	if(head==NULL)
		cout<<"Nothing to pop!"<<endl;
	else {
	while(p->next) {
				n=p;
				p=p->next;
			}
		n->next=NULL;
		delete p;
	}

}

void NumberList::getFrontValue() {

	ListNode *p=head;
	if(head==NULL)
		cout<<"List is empty!"<<endl;
	else {
		cout<<"The first element in the list is: "<<p->value<<endl;
	}
}

void NumberList::getLastValue() {

	ListNode *p=head;
	if(head==NULL)
		cout<<"List is empty!"<<endl;
	else { while(p->next)
			p=p->next;
	}
	cout<<"The last element in the list is: "<<p->value<<endl;
	}

void NumberList::insertAtPosition(int index,int num) {

	ListNode *newNode=new ListNode;
	newNode->value=num;
	ListNode *p=head;
	ListNode *n;
	int count=1;
	if(index==1) {
		head=newNode;
		newNode->next=p;
	}
	else if(index==getSize()){
		while(p->next) {
			p=p->next;
		}
		p->next=newNode;
		newNode->next=NULL;
	}
	else {
		while(p && count<index) {
			n=p;
			p=p->next;
			count++;


		}
		n->next=newNode;
		newNode->next=p;
	}
}

void NumberList::deleteAtPosition(int index) {

	ListNode *p=head;
	ListNode *n;
	int count=1;

	if(index==1) {
		head=p->next;
		delete p;
	}

	else if(index==getSize()) {
		while(p->next) {
			n=p;
			p=p->next;
		}
		n->next=NULL;
		delete p;
	}
	else {
		while(p && count!=index) {
			count++;
			n=p;
			p=p->next;
		}
		n->next=p->next;
		delete p;
		p=n;
	}
}



