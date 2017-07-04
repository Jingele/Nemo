#ifndef __GRAPH_H__
#define __GRAPH_H__

typedef struct Vertex{
	int v;
	int N;
	struct Vertex *adj;
}Vertex,*pVertex;

class Graph{
private:
	int E;
	int V;
	pVertex *ver;

public:
	Graph();
	Graph(int V);
	Graph(const Graph &G);

	int E();
	int V();
	int* adj(pVertex pver);
	void addEdge(int w, int v);	
};

#endif

