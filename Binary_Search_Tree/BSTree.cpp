//============================================================================
// Name        : BSTree.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Binary Search Tree in C++, Ansi-style
//============================================================================

#include <iostream>
#include "BST.h"
using namespace std;

int main() {
	BST t1;

		t1.insert(10);
		t1.insert(5);
		t1.insert(7);
		t1.insert(2);
		t1.insert(12);
		t1.insert(14);
		t1.insert(4);

		cout << "search(12) " << boolalpha << (t1.search(2)) << endl;
		cout << "search(22) " << boolalpha << (t1.search(22)) << endl;

		cout << "InOrder traversal" << endl;
		t1.displayInorder();
		cout<<endl;
		cout <<"PreOrder taverdal" <<endl;
		t1.displayPreorder();
		cout<<endl;
		cout<<"PostOrder traversal" <<endl;
		t1.displayPostorder();
		cout<<endl;

		cout << "Minimum Node value in Tree is: "<<t1.min()<<endl;
		cout << "Maximum Node value in Tree is: "<<t1.max()<<endl;

		cout << "Remove Node 2" << endl;
		t1.remove(2);
		cout<<"Inorder traversal"<<endl;
		t1.displayInorder();
		cout<<endl;

		cout<<"PostOrder traversal"<<endl;
		t1.displayPostorder();
		cout<<endl;
		cout << "search(10) " << boolalpha << (t1.search(10)) << endl;

		cout << "Number of Nodes: " << t1.count() << endl;
		cout << "Number of leaves: " << t1.countL() << endl;
		cout << "Height of Tree: " << t1.countH() << endl;

		cout << "Minimum Node value in Tree is: "<<t1.min()<<endl;
		cout << "Maximum Node value in Tree is: "<<t1.max()<<endl;

		cout<< "Lowest common ancestor for  7 and 4 is: "<<t1.ComAncestor(4,7)<<endl;
		cout<<"The successor node for 5 is: "<<t1.getSuccessor()<<endl;

		cout<<"Level order traversal "<<endl;
		t1.displayLevelorder();

		cout<<"\nZigzag level order traversal "<<endl;
		t1.displayZigzagorder();

}
