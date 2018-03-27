//============================================================================
// Name        : Graph-.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Graph- isCyclic in C++, Ansi-style
//============================================================================

#include <iostream>
#include <list>

using namespace std;

class Graph {
private:
	int V;
	list<int>*adj;
	bool isCyclicUtil(int v, bool visited [], bool *recStack);
public:
	Graph(int);
	void addEdge(int, int);
	bool isCyclic();

};

Graph::Graph(int V) {
	this->V=V;
	adj=new list<int>[V];
}

void Graph::addEdge(int v,int u) {
	adj[v].push_back(u);
}

bool Graph::isCyclicUtil(int v, bool visited [], bool *recStack) {
	if(visited[v]==false) {
		visited[v]=true;
		recStack[v]=true;

		for(auto i=adj[v].begin();i!=adj[v].end();++i){
			if(!visited[*i] && isCyclicUtil(*i,visited,recStack))
				return true;
			else if(recStack[*i])
				return true;
		}
	}
	recStack[v]=false;
	return false;
}

bool Graph::isCyclic() {
	bool *visited=new bool[V];
	bool *recStack=new bool[V];

	for(int i=0;i<V;i++){
		visited[i]=false;
		recStack[i]=false;
	}

	for(int j=0;j<V;j++)
		if(isCyclicUtil(j,visited,recStack))
			return true;
	return false;
}
int main() {
	Graph g(4);
	g.addEdge(0,1);
	g.addEdge(0,2);
	g.addEdge(1,2);
	g.addEdge(2,0);
	g.addEdge(2,3);
	g.addEdge(3,3);
	if(g.isCyclic())
		cout<<"Graph is cyclic!"<<endl;
	else
		cout<<"Graph is not cyclic!"<<endl;

	return 0;
}
