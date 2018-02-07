
#include "stack.h"
#include <iostream>
#include <cassert>
using namespace std;

Stack::Stack() {
	top=-1;
}

void Stack::push(char value) {

	//assert(!isFull());				//Stops the program if asset condition is met
	top++;
	stackArray[top]=value;

}

int Stack::pop() {

	//assert(!isEmpty());
	char num=stackArray[top];
	top--;
	return num;

}

bool Stack::isEmpty() {
	return (top=-1);
}

bool Stack::isFull() {
	return (top=size-1);
}

void Stack::display() {
	for(int i=top;i>=0;i--) {			//Just to give output a stack-like format
		cout<<"|"<<stackArray[i]<<"|"<<endl;
	}
}

bool Stack::isBalanced(string s) {

	//assert(!isEmpty());
	int count=0;
	for(int i=0;i<s.size();i++) {
			push(s[i]);
		}

	for(int j=0;j<s.size();j++) {
	int topchar=pop();
	if(topchar=='(') {
		count++;
	}
	else if(topchar==')') {
		count--;
	}
	}
	if(count==0)
		return true;
	else
		return false;

}

