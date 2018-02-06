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
	cout<<"Is the Linked List empty?"<<endl;
	if(N.isEmpty())
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;

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
	cout<<"Size of Linked List using getSize() function is: "<<endl;
	cout<<N.getSize()<<endl;
	cout<<"Is the Linked List empty? "<<endl;
	if(N.isEmpty())
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
	cout<<"Getting value at a given index: "<<endl;
	N.valueAt(1);
	N.valueAt(2);
	N.valueAt(3);
	N.valueAt(4);
	N.valueAt(5);
	N.valueAt(13);
	cout<<"Pushing 77 in front of the list :"<<endl;
	N.pushFront(77);
	N.display();
	cout<<"Pushing 58 in front of the list: "<<endl;
	N.pushFront(58);
	N.display();
	cout<<"Size of list now: "<<endl;
	cout<<N.getSize()<<endl;
	cout<<"Popping the front element of the list, i.e 58 from previous list:"<<endl;
	N.popFront();
	N.display();
	cout<<"Popping front once more, i.e 77 from previous list:"<<endl;
	N.popFront();
	N.display();
	cout<<"Popping the last element,i.e 20 from previous list: "<<endl;
	N.popBack();
	N.display();
	cout<<"Display the front value from the previous list: "<<endl;
	N.getFrontValue();
	cout<<"Display the last value from the previous list :"<<endl;
	N.getLastValue();
	cout<<"Insert 55 at 2nd position: "<<endl;
	N.insertAtPosition(2,55);
	N.display();
	cout<<"Insert 78 at 1st position, 65 at 4th position and 99 at last position"<<endl;
	N.insertAtPosition(1,78);
	N.insertAtPosition(4,65);
	N.insertAtPosition(N.getSize(),99);
	N.display();
	cout<<"Delete element at position 3 from previous list: "<<endl;
	N.deleteAtPosition(3);
	N.display();
	cout<<"Delete element at first and last position from previous list: "<<endl;
	N.deleteAtPosition(1);
	N.deleteAtPosition(N.getSize());
	N.display();
}
