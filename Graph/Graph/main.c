#include "ArrayGraph.h"
#include "ListGraph.h"

int main(void)
{
	ArrayGraph g1;

	InitArrayGraph(&g1, Non_directional, 4);
	InsertArrayEdge(&g1, 0, 1);
	InsertArrayEdge(&g1, 1, 2);
	InsertArrayEdge(&g1, 3, 0);
	ShowArrayGraphInfo(g1);
	RemoveArrayEdge(&g1, 1, 2);
	ShowArrayGraphInfo(g1);

	ArrayGraph g2;

	InitArrayGraph(&g2, Directional, 4);
	InsertArrayEdge(&g2, 0, 1);
	InsertArrayEdge(&g2, 1, 2);
	InsertArrayEdge(&g2, 3, 0);
	ShowArrayGraphInfo(g2);
	RemoveArrayEdge(&g2, 1, 2);
	ShowArrayGraphInfo(g2);

	ListGraph g3;

	InitListGraph(&g3, Non_directional, 4);
	InsertListEdge(&g3, 0, 1);
	InsertListEdge(&g3, 1, 2);
	InsertListEdge(&g3, 3, 0);
	ShowListGraphInfo(g3);
	RemoveListEdge(&g3, 1, 2);
	ShowListGraphInfo(g3);

	ListGraph g4;

	InitListGraph(&g4, Directional, 4);
	InsertListEdge(&g4, 0, 1);
	InsertListEdge(&g4, 1, 2);
	InsertListEdge(&g4, 3, 0);
	ShowListGraphInfo(g4);
	RemoveListEdge(&g4, 1, 2);
	ShowListGraphInfo(g4);
}
