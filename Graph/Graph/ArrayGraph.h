#pragma once
#include "Graph.h"

typedef struct graph
{
	int kinds;
	int vertex;
	int edge;
	int** g;
} ArrayGraph;

void InitArrayGraph(ArrayGraph* g, int kinds, int vertex);
void InsertArrayEdge(ArrayGraph* g, int start, int end);
void RemoveArrayEdge(ArrayGraph* g, int start, int end);
void ShowArrayGraphInfo(ArrayGraph g);
void DFS(ArrayGraph g);