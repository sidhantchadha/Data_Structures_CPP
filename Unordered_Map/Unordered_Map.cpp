//============================================================================
// Name        : Unordered_Map.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Unordered_Map in C++, Ansi-style
//============================================================================

#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;


int main() {

unordered_map<string,int> umap;

//Inserting using [] operator//
umap["one"]=1;
umap["two"]=2;
umap["three"]=3;
umap["four"]=4;

//Inserting using insert member function//
umap.insert(make_pair("five",5));
umap.insert(make_pair("six",6));

//Lookup using a key in constant time//
string key="four";
if(umap.find(key)==umap.end())
	cout<<"\nNot found"<<endl;
else
	cout<<"\nFound"<<endl;

//Display all keys and values in a hash table//
unordered_map<string,int>::iterator itr;
for(itr=umap.begin();itr!=umap.end();itr++)
	cout<<"Key: "<<itr->first<<", Value: "<<itr->second<<endl;

unordered_map<string,int>::hasher fn=umap.hash_function();
cout<<"The hash function converts string like 'sidhant' to: "<<fn("sidhant")<<endl;

//Remove bucket using remove member function//
umap.erase("two");
for(itr=umap.begin();itr!=umap.end();itr++)
	cout<<"Key: "<<itr->first<<", Value: "<<itr->second<<endl;

//Overwrite bucket using [] operator. Insert member function does not overwrite a bucket//
umap["three"]=30;
cout<<endl;

for(itr=umap.begin();itr!=umap.end();itr++)
	cout<<"Key: "<<itr->first<<", Value: "<<itr->second<<endl;

//Number of values at a key//
cout<<"Number of values at key : three= "<<umap.count("three")<<endl;

//Size of hash table at any time//
cout<<"Size of Hash Table is: "<<umap.size()<<endl;

//Search using key. If found, display value and key//
itr =umap.find("three");
	key="three";
if(itr==umap.end())
	cout<<"Not found!"<<endl;
else
	cout<<"Key: "<<itr->first<<", Value: "<<itr->second<<endl;

//Delete hash table//
cout<<"Clear Hash Table!"<<endl;
umap.clear();


}
