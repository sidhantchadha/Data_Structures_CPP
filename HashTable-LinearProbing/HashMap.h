

#ifndef HASHMAP_H_
#define HASHMAP_H_
#include<iostream>
#include<string>
#include<cstdlib>
#include<cstdio>
#include "HashEntry.h"

using namespace std;
const int capacity=10;
class HashMap {
private:
	HashEntry **table;
	HashEntry *dummy;
	int size;
public:
	HashMap() {

			cout<<"Initializing HashTable!"<<endl;
			size=0;
			table=new HashEntry *[capacity];

			for(int i=0;i<capacity;i++)
				table[i]=NULL;
			dummy=new HashEntry(-1,-1);


	}
	int hashFunc(int);
	void insert(int,int);
	int remove(int);
	int get(int);
	int sizeOf();
	bool isEmpty();
	void display();

};




#endif /* HASHMAP_H_ */
