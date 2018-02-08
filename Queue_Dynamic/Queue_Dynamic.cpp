//============================================================================
// Name        : Queue_Dynamic.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "queue.h"
using namespace std;

int main() {

	Queue Q;
	cout<<"Enqueue-ing elements into queue, and displaying the queue: "<<endl;
	Q.enqueue(5);
	Q.enqueue(8);
	Q.enqueue(9);
	Q.enqueue(12);
	Q.enqueue(28);
	Q.display();
	cout<<"Dequeue-ing "<<Q.dequeue()<<" and displaying the queue: "<<endl;
	Q.display();
	cout<<"Dequeue-ing "<<Q.dequeue()<<" and displaying the queue: "<<endl;
	Q.display();
	cout<<"Dequeue-ing "<<Q.dequeue()<<" and displaying the queue: "<<endl;
	Q.display();
}
