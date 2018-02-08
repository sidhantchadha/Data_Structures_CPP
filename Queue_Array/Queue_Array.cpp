//============================================================================
// Name        : Queue_Array.cpp
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
	cout<<"Enqueue-ing elements and displaying the queue:"<<endl;
	Q.enqueue(3);
	Q.enqueue(7);
	Q.enqueue(9);
	Q.enqueue(39);
	Q.enqueue(49);
	Q.display();
	cout<<"Dequeue-ing "<<Q.dequeue()<<" and displaying queue."<<endl;
	Q.display();
	cout<<"Dequeue-ing "<<Q.dequeue()<<" and displaying queue."<<endl;
	Q.display();

}
