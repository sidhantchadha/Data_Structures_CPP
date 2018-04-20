

#ifndef BST_H_
#define BST_H_
#include <iostream>
#include <cassert>
using namespace std;

class BST {
private:
	struct TreeNode {
		int value;
		TreeNode *left;
		TreeNode *right;
	};

	TreeNode *root;
	void insertNode(TreeNode *&,int);
	void deleteNode(TreeNode *&,int);
	void makeDeletion(TreeNode *&);
	void deleteTree(TreeNode *);

	void printInorder(TreeNode *) const ;
	void printPreorder(TreeNode *) const;
	void printPostorder(TreeNode *) const;
	void printLevelorder(TreeNode *) const;

	int countNodes(TreeNode *);
	int countLeaf(TreeNode *);
	int countHeight(TreeNode *);

	int minNode(TreeNode *);
	int maxNode(TreeNode *);

	int lowestCommonAncestor(TreeNode *,int,int);
	int getSuccessorNode(TreeNode *);


public:
	BST(){
		cout<<"Initializing BST!"<<endl;
		root=NULL;
	}
	~BST(){
		deleteTree(root);
	}
	void insert(int);
	void remove(int);
	bool search(int);

	void displayInorder() const {
		printInorder(root);
	}
	void displayPreorder() const {
		printPreorder(root);
	}
	void displayPostorder() const {
		printPostorder(root);
	}
	void displayLevelorder() const {
		printLevelorder(root);
	}


	int count();
	int countL();
	int countH();

	int min();
	int max();

	int ComAncestor(int,int);
	int getSuccessor();



};





#endif /* BST_H_ */
