//============================================================================
// Name        : Stacks_Array.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description :  Stack implementation (Array) in C++, Ansi-style
//============================================================================

#include <iostream>
#include "stack.h"
using namespace std;

int main() {

	Stack S;
	cout<<"Pushing elements into stack and displaying the stack:"<<endl;
	S.push('a');
	S.push('c');
	S.push('h');
	S.push('t');
	S.display();

	cout<<"Popping and displaying Stack: "<<endl;
	S.pop();
	S.display();

	cout<<"Popping and displaying Stack: "<<endl;
	S.pop();
	S.display();

	Stack S1;
	cout<<"Enter a string to check for balanced parenthesis:"<<endl;
	string s1;
	cin>>s1;
	if(S1.isBalanced(s1))
		cout<<"Yes, parenthesis balanced!"<<endl;
	else
		cout<<"Not balanced!"<<endl;
	S1.display();
}
