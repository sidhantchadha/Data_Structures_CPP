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

