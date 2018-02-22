//============================================================================
// Name        : HashMap-LinearProbing.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : HashMap with Linear Probing in C++, Ansi-style
//============================================================================

#include<iostream>
#include<string>
#include<cstdlib>
#include<cstdio>
#include "HashEntry.h"
#include "HashMap.h"

using namespace std;

int main() {
	HashMap h;
	cout<<"Size of HashTable initially (Items present): "<<h.sizeOf()<<endl;
	if(h.isEmpty())
		cout<<"Hash Table Empty!"<<endl;
	else
		cout<<"Not Empty! HashTable has "<<h.sizeOf()<<" items."<<endl;;
	h.isEmpty();
	h.insert(1,200);
	h.insert(2,34);
	h.insert(3,78);
	h.insert(13,98);
	h.insert(23,100);
	h.display();
	cout<<"Size of HashTable: "<<h.sizeOf()<<endl;
	h.remove(2);
	cout<<"Deleted Value at Key 2!"<<endl;
	h.remove(23);
	cout<<"Deleted Value at Key 23!"<<endl;
	h.display();
	cout<<"Size of HashTable (Items present): "<<h.sizeOf()<<endl;
	cout<<"Search for Value at Key 1: "<<h.get(1)<<endl;
	cout<<"Does a value exist at key=7?"<<endl;
	if(h.find(7))
		cout<<"Yes, value exists!"<<endl;
	else
		cout<<"Value does not exist! Bucket is empty!"<<endl;
	cout<<"Does a value exist at key=13?"<<endl;
		if(h.find(13))
			cout<<"Yes, value exists!"<<endl;
		else
			cout<<"Value does not exist! Bucket is empty!"<<endl;
	h.insert(8,28);
	cout<<"Size of HashTable (Items present): "<<h.sizeOf()<<endl;
	h.display();




	return 0;
}
