#include "ArrayGraph.h"
#include "ListGraph.h"
#include "Queue.h"
#include <stdio.h>

int main(void)
{
	ArrayGraph g1;
	InitArrayGraph(&g1, Non_directional, 6);

	InsertArrayEdge(&g1, 0, 1);
	InsertArrayEdge(&g1, 0, 2);
	InsertArrayEdge(&g1, 1, 3);
	InsertArrayEdge(&g1, 2, 3);
	InsertArrayEdge(&g1, 3, 4);
	InsertArrayEdge(&g1, 3, 5);
	InsertArrayEdge(&g1, 4, 5);

	DFS(g1);

	ListGraph g2;
	InitListGraph(&g2, Non_directional, 6);

	InsertListEdge(&g2, 0, 1);
	InsertListEdge(&g2, 0, 2);
	InsertListEdge(&g2, 1, 3);
	InsertListEdge(&g2, 2, 3);
	InsertListEdge(&g2, 3, 4);
	InsertListEdge(&g2, 3, 5);
	InsertListEdge(&g2, 4, 5);
	ShowListGraphInfo(g2);
	BFS(g2);
}
