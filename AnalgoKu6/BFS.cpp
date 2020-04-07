/*
Nama    : Shalvina Zahwa Aulia
NPM     : 140810180052
Tugas 6 BFS
*/
#include<iostream>
#include <list>

using namespace std;

class Graph{
	int V;
	list<int> *adj;
public:
	Graph(int V);
	void addEdge(int v, int w);
	void BFS(int s);
};

Graph::Graph(int V){
	this->V = V;
	adj = new list<int>[V];
}

void Graph::addEdge(int v, int w){
	adj[v].push_back(w);
}

void Graph::BFS(int s){
	bool *visited = new bool[V];
	for(int i = 0; i < V; i++)
		visited[i] = false;
	list<int> queue;
	visited[s] = true;
	queue.push_back(s);
	list<int>::iterator i;

	while(!queue.empty()){
		s = queue.front();
		cout << s << " ";
		queue.pop_front();
		for (i = adj[s].begin(); i != adj[s].end(); ++i){
			if (!visited[*i]){
				visited[*i] = true;
				queue.push_back(*i);
			}
		}
	}
}

int main(){
	Graph g(8);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
	g.addEdge(2, 4);
 	g.addEdge(2, 5);
 	g.addEdge(2, 3);
 	g.addEdge(3, 7);
 	g.addEdge(3, 8);
 	g.addEdge(4, 5);
 	g.addEdge(5, 3);
 	g.addEdge(5, 6);
 	g.addEdge(7, 8);

	cout << "Hasil Breadth First Traversal dengan awal 1\n";
	g.BFS(1);

	return 0;
}
