//============================================================================
// Name        : LinkedList 1.0.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Linked List implementation in C++, Ansi-style
//============================================================================

#include <iostream>
#include "LL.h"
using namespace std;

int main() {

	cout<<"This is a simple Linked List implementation!"<<endl;
	NumberList N;
	cout<<"Insert 20 and display list:"<<endl;
	N.insertNode(20);
	N.display();
	cout<<"Insert 25 and display list:"<<endl;
	N.insertNode(25);
	N.display();
	cout<<"Insert operation terminates."<<endl;
	cout<<"Append 80 and display list:"<<endl;
	N.appendNode(80);
	N.display();
	cout<<"Append operation terminates."<<endl;
	cout<<"Delete 25 and display list:"<<endl;
	N.deleteNode(25);
	N.display();
	cout<<"Additional insert operations:"<<endl;
	N.insertNode(22);
	N.insertNode(26);
	N.insertNode(47);
	N.display();
	cout<<"Reversing the list now: "<<endl;
	N.reverseList();
	N.display();

}
