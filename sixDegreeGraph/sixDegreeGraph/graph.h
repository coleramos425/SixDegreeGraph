#ifndef GRAPH_H
#define GRAPH_H
#include<iostream>
#include <list> 
#include <string>

class Graph
{
	int V;    // No. of vertices 
			  // Pointer to an array containing adjacency 
			  // lists 
	std::list<int> *adj;
public:
	Graph(int V);  // Constructor 

	// function to add an edge to graph 
	void addEdge(int v, int w);

	// prints BFS traversal from a given source s 
	bool BFS(int s, int target);
};

#endif // !GRAPH.H

