#include<iostream>
#include<string>
#include<cstdlib>
#include<cstdio>
#include "HashEntry.h"
#include "HashMap.h"



int HashMap::hashFunc(int key) {
	return key%capacity;
}

void HashMap:: insert(int key,int value) {
	HashEntry *temp=new HashEntry(key,value);
	int hash=hashFunc(key);
	while(table[hash]!=NULL && table[hash]->key!=key && table[hash]->key!=-1){
		hash=hashFunc(hash+1);
	}
	if(table[hash]==NULL || table[hash]->key!=key) {
		size++;
		table[hash]=temp;
	}

}

int HashMap::remove(int key) {
	int hash=hashFunc(key);
	while(table[hash]!=NULL) {
		if(table[hash]->key==key) {
			HashEntry *temp=table[hash];
			table[hash]=dummy;
			size--;
			return temp->value;
		}
		hash=hashFunc(hash+1);
	}
	return NULL;
}

int HashMap::get(int key) {
	int hash=hashFunc(key);
	while(table[hash]!=NULL) {
		if(table[hash]->key==key)
			return table[hash]->value;
		hash=hashFunc(hash+1);
	}
	return NULL;
}

int HashMap::sizeOf() {
	return size;
}

bool HashMap:: isEmpty() {
	return size==0;
}

void HashMap::display() {
	for(int i=0;i<capacity;i++) {
		if(table[i]!=NULL && table[i]!=dummy)

			cout<<"Key: "<<table[i]->key<<" "<<"Value: "<<table[i]->value<<endl;
	}
}

bool HashMap::find(int key){
	int hash=hashFunc(key);
	while(table[hash]!=NULL) {
		if(table[hash]->key==key)
			return true;
		hash=hashFunc(hash+1);
	}
	return false;
}


