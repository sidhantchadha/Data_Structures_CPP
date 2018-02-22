

#ifndef HASHENTRY_H_
#define HASHENTRY_H_
#include<iostream>
#include<string>
#include<cstdlib>
#include<cstdio>

using namespace std;

class HashEntry {
public:
	int key;
	int value;
	HashEntry(int key, int value) {
		this->key=key;
		this->value=value;
	}

};




#endif /* HASHENTRY_H_ */
