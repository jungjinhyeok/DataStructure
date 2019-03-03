#pragma once
#include "Graph.h"

typedef struct node
{
	int vertex;
	struct node* next;
}Node;

typedef struct list_graph
{
	int vertex;
	int edge;
	int kinds;
	Node** node;
}ListGraph;

void InitListGraph(ListGraph* g, int kinds, int vertex);
void InsertListEdge(ListGraph* g, int start, int end);
void RemoveListEdge(ListGraph* g, int start, int end);
void ShowListGraphInfo(ListGraph g);