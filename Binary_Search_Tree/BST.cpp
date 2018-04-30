#include <iostream>
#include <cassert>
#include <queue>
#include "BST.h"

using namespace std;

void BST::insertNode(TreeNode *&p, int num) {

	if(p==NULL) {
		p= new TreeNode;
		p->value=num;
		p->left=NULL;
		p->right=NULL;
	}

	else if(num < p->value)
		insertNode(p->left,num);
	else if(num > p->value)
		insertNode(p->right,num);
}

void BST::insert(int num) {
	insertNode(root,num);
}

void BST::deleteNode(TreeNode *&p,int num) {
	if(p==NULL) {
		cout<<"No such node!"<<endl;
		return;
	}
	else if(num < p->value) {

		deleteNode(p->left,num);
	}

	else if(num > p->value) {

		deleteNode(p->right,num);
	}
	else {

		makeDeletion(p);
	}

}

void BST:: remove(int num) {
	deleteNode(root,num);
}

void BST:: makeDeletion(TreeNode *&p) {

	assert (p);

	    TreeNode *temp = NULL;

	    if (p->right == NULL)
	    {
	        temp = p;
	        p = p->left;
	        delete temp;
	    }
	    else if (p->left == NULL)
	    {
	        temp = p;
	        p = p->right;
	        delete temp;
	    }

	    else
	    {

	        temp = p->right;
	        while (temp->left)
	            temp = temp->left;
	        temp->left = p->left;
	        temp = p;
	        p = p->right;
	        delete temp;
	    }

}

void BST::deleteTree(TreeNode *p) {


	if(p) { if(p->left)
			deleteTree(p->left);
			if(p->right)
			deleteTree(p->right);
			delete p;

	}
}

bool BST:: search(int num) {
	TreeNode *p=root;
	while(p) {
		if(p->value==num)
			return true;
		if(num < p->value)
			p=p->left;
		if(num > p->value)
			p=p->right;

	}
	return false;

}

void BST::printInorder(TreeNode *p) const {
if(p) {
		printInorder(p->left);
		cout<<p->value<<" ";
		printInorder(p->right);
	}
}

void BST::printPreorder(TreeNode *p) const {
	if(p) {
		cout<<p->value<<" ";
		printPreorder(p->left);
		printPreorder(p->right);
	}
}

void BST::printPostorder(TreeNode *p) const {
	if(p) {
		printPostorder(p->left);
		printPostorder(p->right);
		cout<<p->value<<" ";
	}
}

int BST::countNodes(TreeNode *p) {
	int c1=0;
	int c2=0;
	if(p->left)
		c1=1+countNodes(p->left);

	if(p->right)
		c2=1+countNodes(p->right);

	return c1+c2;

}

int BST::count() {
	return 1+countNodes(root);
}

int BST::countLeaf(TreeNode *p) {

	if(p==NULL)
		return 0;
	else if(p->left==NULL && p->right==NULL)
		return 1;
	else
		return countLeaf(p->left) + countLeaf(p->right);
}

int BST::countL() {
	return countLeaf(root);
}

int BST::countHeight(TreeNode *p) {
	if(p==NULL)
		return 0;
	else {
		int l=countHeight(p->left);
		int r=countHeight(p->right);

	if(l>r)
		return 1+l;
	else
		return 1+r;
	}
}

int BST::countH() {
	return countHeight(root);
}

int BST::minNode(TreeNode *p) {
	if(p==NULL)
		return -1;
	else {
	while(p->left)
		p=p->left;
	}
	return p->value;

}

int BST::min() {
	return minNode(root);
}

int BST::maxNode(TreeNode *p) {
	if(p==NULL)
		return -1;
	else{
	while(p->right)
		p=p->right;
	}
	return p->value;
}

int BST::max() {
	return maxNode(root);
}

int BST:: lowestCommonAncestor(TreeNode *p,int v1,int v2) {
	if(p==NULL)
		return -1;
	while(p) {
	 if(v1 < p->value && v2 < p->value)
			p=p->left;
	else if(v1 > p->value && v2 > p->value)
			p=p->right;
	else
			return p->value;
	}
	return -1;



}

int BST::ComAncestor(int v1,int v2){
	return lowestCommonAncestor(root,v1,v2);
}

int BST:: getSuccessorNode(TreeNode *p) {
	if(p==NULL || p->right==NULL)
		return -1;
	else { p=p->right;
			return p->value;
	}
	return -1;
}

int BST:: getSuccessor() {
	return getSuccessorNode(root);
}

void BST:: printLevelorder(TreeNode *p) const {
	queue<TreeNode*>q;
	if(p)
		q.push(p);
	while(!q.empty()) {
		if(p->left)
			q.push(p->left);
		if(p->right)
			q.push(p->right);

	cout<<q.front()->value<<" ";
	q.pop();
	p=q.front();
	}


}

void BST:: printZigzagorder(TreeNode *p) const {
	queue<TreeNode*>q;
	q.push(p);
	int level=1;
	vector<int>V;
	while(!q.empty()){
		if(p->left)
			q.push(p->left);
		if(p->right)
			q.push(p->right);
		if(level==1)
			V.push_back(q.front()->value);
		else
			V.insert(V.begin(),q.front()->value);
		q.pop();
		level=-level;
		p=q.front();

	}

	for(auto i=V.begin();i!=V.end();i++)
		cout<<*i<<" ";

}
