/*
 * HashMap.h
 *
 *  Created on: Feb 20, 2018
 *      Author: Powerlifter
 */

#ifndef HASHMAP_H_
#define HASHMAP_H_
#include<iostream>
#include<string>
#include<cstdlib>
#include<cstdio>
#include "HashEntry.h"

using namespace std;

const int TS=128;
class HashMap {
private:
	HashEntry **table;
public:
	HashMap(){
		table=new HashEntry* [TS];

		for(int i=0;i<TS;i++)
			table[i]=NULL;
		cout<<table[1]->value;
	}
	int hashFunc(int);
	void insert(int,int);
	int search(int);
	void remove(int);
	~HashMap();



};



#endif /* HASHMAP_H_ */
