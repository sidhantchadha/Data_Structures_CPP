//============================================================================
// Name        : MotherVertex.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Finding mother vertex in a graph in C++, Ansi-style
//============================================================================

#include <iostream>
#include <list>
using namespace std;

class Graph {
private:
	int V;
	list<int>*adj;
public:
	Graph(int);
	void addEdge(int,int);
	void DFSUtil(int,bool []);
	int findMother();
};

Graph::Graph(int V){
	this->V=V;
	adj=new list<int>[V];
}

void Graph::addEdge(int v, int w) {
	adj[v].push_back(w);
}

void Graph::DFSUtil(int v, bool visited []){
	visited[v]=true;										//Mark visited node true//
	for(auto i=adj[v].begin();i!=adj[v].end();++i){
		if(!visited[*i])
			DFSUtil(*i,visited);							//Find all accessbile neighbors and mark them true//
	}
}

int Graph:: findMother() {

	bool *visited=new bool[V];
	for(int i=0;i<V;i++)
		visited[i]=false;

	int v=0;

	for(int j=0;j<V;j++)
		if(!visited[j]) {
			DFSUtil(j,visited);
			v=j;
		}

	for(int i=0;i<V;i++)
		visited[i]=false;

	DFSUtil(v,visited);
	for(int k=0;k<V;k++) {					//Check is all vertices are reachable from v//
		if(!visited[k])
			return -1;
	}

	return v;
}

int main() {
	Graph g(7);
	    g.addEdge(0, 1);
	    g.addEdge(0, 2);
	    g.addEdge(1, 3);
	    g.addEdge(4, 1);
	    g.addEdge(6, 4);
	    g.addEdge(5, 6);
	    g.addEdge(5, 2);
	    g.addEdge(6, 0);

	    cout << "Mother vertex is " << g.findMother();

	    return 0;
}
