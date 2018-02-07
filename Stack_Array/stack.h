

#ifndef STACK_H_
#define STACK_H_
#include<iostream>
using namespace std;

class Stack {
private: static const int size=100;
		 char stackArray[size];
		 int top;
public:
		 Stack();
		 void push(char);
		 int pop();
		 bool isEmpty();
		 bool isFull();
		 void display();
		 bool isBalanced(string);

};




#endif /* STACK_H_ */
