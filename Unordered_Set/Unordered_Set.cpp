//============================================================================
// Name        : Unordered_Set.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Unordered_Set in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main() {
	unordered_set<string> uset;

	//Simple insert method//
	uset.insert("one");
	uset.insert("two");
	uset.insert("three");
	uset.insert("four");

	//Simple find method for lookup//
	cout<<"Searching for key: three. "<<endl;
	string key="three";
	if(uset.find(key)==uset.end())
		cout<<"Not found!"<<endl;
	else
		cout<<"Found!: "<<endl;

	//Displaying hash set//
	cout<<"Items in hash set: "<<endl;
	unordered_set<string>::iterator itr;
	for(itr=uset.begin(); itr!=uset.end();itr++)
		cout<<*itr<<endl;

	//Returning key in found method//
	itr=uset.find("two");
	if(itr==uset.end())
		cout<<"Not found!"<<endl;
	else
		cout<<"Found: "<<*itr<<endl;

	//Simple erase method to remove a key//
	uset.erase("one");

	//Displaying hash set//
	cout<<"Items in hash set after removing 'one' : "<<endl;
	for(itr=uset.begin(); itr!=uset.end();itr++)
		cout<<*itr<<endl;

	//Size of hash set//
	cout<<"Size of hash set: "<<uset.size()<<endl;

	//Checking if set is empty//
	if(uset.empty())
		cout<<"Set empty!"<<endl;
	else
		cout<<"Set not empty!"<<endl;

	//Delete hash set//
	cout<<"Deleting hash set using clear method."<<endl;
	uset.clear();

	//Checking if set is empty//
	if(uset.empty())
		cout<<"Set empty!"<<endl;
	else
		cout<<"Set not empty!"<<endl;

	//To store a set with duplicate values, we use unordered_multiset//
	unordered_multiset<string>umset;

	umset.insert("six");
	umset.insert("seven");
	umset.insert("seven");
	umset.insert("eight");
	umset.insert("nine");

	//To display the unordered multiset//
	unordered_multiset<string>:: iterator itr1;

	for(itr1=umset.begin(); itr1 != umset.end(); itr1++)
		cout<<*itr1<<endl;

	//Other methods are similar to unordered_set//
}
