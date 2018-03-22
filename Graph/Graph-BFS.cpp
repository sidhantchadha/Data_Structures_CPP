//============================================================================
// Name        : Graph-BFS.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Directed Graph- Breadth First Search in C++, Ansi-style
//============================================================================

#include	<iostream>
#include	<list>

using namespace std;

class Graph {
private: int V;							//V is vertices of the graph//
		list<int>*adj;
public:
		Graph(int);
		void addEdge(int,int);
		void BFS(int);
};

Graph::Graph(int V) {

	this->V=V;
	adj=new list<int>[V];
}

void Graph:: addEdge(int v, int w) {
	adj[v].push_back(w);
}

void Graph:: BFS(int s) {
	bool *visited=new bool[V];
	for(int i=0;i<V;i++)
		visited[i]=false;

	list<int>queue;

	visited[s]=true;
	queue.push_back(s);

	list<int>::iterator i;
	while(!queue.empty()){
		s=queue.front();
		cout<<s<<" ";
		queue.pop_front();

		for(i=adj[s].begin(); i!=adj[s].end();++i){
			if(!visited[*i]){								//As long as vertex is not visited, add it to queue//

				visited[*i]=true;
				queue.push_back(*i);
			}
		}
	}

}

int main() {
	Graph G(4);
	G.addEdge(0,1);
	G.addEdge(0,2);
	G.addEdge(1,2);
	G.addEdge(2,0);
	G.addEdge(2,3);
	G.addEdge(3,3);

	cout<<"BFS starting from vertex 2 is: "<<endl;
	G.BFS(2);

	return 0;

}

