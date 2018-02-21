//============================================================================
// Name        : HashMap.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : HashMaps Without Collision Resolution in C++, Ansi-style
//============================================================================

#include<iostream>
#include<string>
#include<cstdlib>
#include<cstdio>
#include "HashEntry.h"
#include "HashMap.h"

using namespace std;

int HashMap::hashFunc(int key) {
	return key%TS;
}

void HashMap::insert(int key,int value) {

	int hash=hashFunc(key);
	while(table[hash]!=NULL && table[hash]->key!=key){
		hash=hashFunc(hash+1);
	}
	if(table[hash]!=NULL)
		delete table[hash];
	table[hash]=new HashEntry(key,value);

}

int HashMap::search(int key) {
	int hash=hashFunc(key);
	while(table[hash]!=NULL && table[hash]->key!=key){
		hash=hashFunc(hash+1);
	}
	if(table[hash]==NULL) {
		cout<<"No element at this key!";
		return -1;
	}
	else
		return table[hash]->value;
}

void HashMap::remove(int key) {
	int hash=hashFunc(key);
	while(table[hash]!=NULL){
		if(table[hash]->key==key)
			break;
		hash=hashFunc(hash+1);
	}
	if(table[hash]==NULL)
		cout<<"No element to delete!";
	else
		delete table[hash];
	cout<<"Deleted!";
}

HashMap::~HashMap(){
	for(int i=0;i<TS;i++) {
		delete table[i];
		delete [] table;
	}

}
