#include "ArrayGraph.h"
#include <stdlib.h>
#include <stdio.h>

void InitArrayGraph(ArrayGraph* g, int kinds, int vertex)
{
	g->kinds = kinds;
	g->vertex = vertex;
	g->edge = 0;
	g->g = (int**)malloc(sizeof(int*)*vertex);
	
	for (int i = 0; i < vertex; i++)
	{
		g->g[i] = (int*)malloc(sizeof(int)*vertex);

		for (int j = 0; j < vertex; j++)
			g->g[i][j] = 0;
	}
}

void InsertArrayEdge(ArrayGraph* g, int start, int end)
{
	g->edge++;
	g->g[start][end] = 1;

	if (g->kinds == Non_directional)
		g->g[end][start] = 1;
}

void RemoveArrayEdge(ArrayGraph* g, int start, int end)
{
	g->edge--;
	g->g[start][end] = 0;

	if(g->kinds == Non_directional)
	{
		g->g[end][start] = 0;
	}
}

void ShowArrayGraphInfo(ArrayGraph g)
{
	printf("-----Array Graph Info-----\n");
	printf("Vertex Num : %d\n", g.vertex);
	printf("Edge Num : %d\n", g.edge);
	printf("Kinds : %s\n", (g.kinds == Directional ? "Directional" : "Non Directional"));
	
	for(int i=0; i<g.vertex; i++)
		for(int j=0; j<g.vertex; j++)
			if (g.g[i][j] == 1)
				printf("Edge : %d %d\n", i, j);
	printf("--------------------------\n");
}
