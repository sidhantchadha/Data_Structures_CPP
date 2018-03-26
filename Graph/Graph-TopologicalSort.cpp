//============================================================================
// Name        : Graph-TopologicalSort.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Topological Sort in Graph in C++, Ansi-style
//============================================================================

#include <iostream>
#include <list>
#include <stack>
using namespace std;

class Graph {
private:
	int V;
	list<int>*adj;
public:
	Graph(int);
	void addEdge(int,int);
	void topologicalSortUtil(int,bool [], stack<int>&);
	void topologicalSort();
};

Graph::Graph(int V) {
	this->V=V;
	adj=new list<int>[V];
}

void Graph::addEdge(int v, int u) {
	adj[v].push_back(u);
}

void Graph::topologicalSortUtil(int v, bool visited[], stack<int>&Stack) {
	visited[v]=true;
	for(auto i=adj[v].begin();i!=adj[v].end();++i){
		if(!visited[*i])
			topologicalSortUtil(*i,visited,Stack);
	}
	Stack.push(v);
}

void Graph::topologicalSort() {
	stack<int>Stack;
	bool *visited=new bool[V];
	for(int i=0;i<V;i++)
		visited[i]=false;

	for(int j=0;j<V;j++) {
		if(!visited[j])
			topologicalSortUtil(j,visited,Stack);
	}

	while(!Stack.empty()) {
		cout<<Stack.top()<<" ";
		Stack.pop();
	}
}

int main() {
	Graph g(6);
	g.addEdge(5,2);
	g.addEdge(5,0);
	g.addEdge(4,0);
	g.addEdge(4,1);
	g.addEdge(2,3);
	g.addEdge(3,1);
	cout<<"Topological sort of this graph is: ";
	g.topologicalSort();
	return 0;
}
