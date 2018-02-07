//============================================================================
// Name        : Stacks_DynamicAllocation.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Stack implementation (Dynamically) in C++, Ansi-style
//============================================================================

#include <iostream>
#include "stack.h"
using namespace std;

int main() {

	Stack S;
	cout<<"Pushing elements into Stack, and displaying it: "<<endl;
	cout<<"Popping "<<S.pop()<<" out of stack, remaining stack list is: "<<endl;

	S.push(2);
	S.push(8);
	S.push(5);
	S.display();
	cout<<"Popping "<<S.pop()<<" out of stack, remaining stack list is: "<<endl;
	S.display();

}
