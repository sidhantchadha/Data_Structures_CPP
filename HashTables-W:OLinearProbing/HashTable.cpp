

#include<iostream>
#include<string>
#include<cstdlib>
#include<cstdio>
#include "HashEntry.h"
#include "HashMap.h"

using namespace std;

int main() {
	HashMap hash;
	    int key, value;
	    int choice;
	    while (1)
	    {
	        cout<<"\n----------------------"<<endl;
	        cout<<"Operations on Hash Table"<<endl;
	        cout<<"\n----------------------"<<endl;
	        cout<<"1.Insert element into the table"<<endl;
	        cout<<"2.Search element from the key"<<endl;
	        cout<<"3.Delete element at a key"<<endl;
	        cout<<"4.Exit"<<endl;
	        cout<<"Enter your choice: ";
	        cin>>choice;
	        switch(choice)
	        {
	        case 1:
	            cout<<"Enter element to be inserted: ";
	            cin>>value;
	            cout<<"Enter key at which element to be inserted: ";
	            cin>>key;
	            hash.insert(key, value);
	            break;
	        case 2:
	            cout<<"Enter key of the element to be searched: ";
	            cin>>key;
	            if (hash.search(key) == -1)
	            {
		        cout<<"No element found at key "<<key<<endl;
		        continue;
		    }
		    else
		    {
		        cout<<"Element at key "<<key<<" : ";
		        cout<<hash.search(key)<<endl;
		    }
	            break;
	        case 3:
	            cout<<"Enter key of the element to be deleted: ";
	            cin>>key;
	            hash.remove(key);
	            break;
	        case 4:
	            exit(1);
	        default:
	           cout<<"\nEnter correct option\n";
	       }
	    }
	    return 0;
}
