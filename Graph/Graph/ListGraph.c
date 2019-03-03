#include "ListGraph.h"
#include "Queue.h"
#include <stdlib.h>
#include <stdio.h>

void InitListGraph(ListGraph* g, int kinds, int vertex)
{
	g->kinds = kinds;
	g->vertex = vertex;
	g->edge = 0;

	g->node = (Node**)malloc(sizeof(Node*)*vertex);

	for(int i=0; i<vertex; i++)
	{
		Node* nd = (Node*)malloc(sizeof(Node));
		nd->vertex = i;
		nd->next = NULL;

		g->node[i] = nd;
	}
}

void InsertListEdge(ListGraph* g, int start, int end)
{
	Node* end_nd = (Node*)malloc(sizeof(Node));
	end_nd->vertex = end;
	end_nd->next = g->node[start]->next;

	g->node[start]->next = end_nd;

	if (g->kinds == Non_directional)
	{
		Node* start_nd = (Node*)malloc(sizeof(Node));
		start_nd->vertex = start;
		start_nd->next = g->node[end]->next;

		g->node[end]->next = start_nd;
	}
	
	g->edge++;
}

void RemoveListEdge(ListGraph* g, int start, int end)
{
	Node* prev = g->node[start];
	Node* temp = g->node[start]->next;

	while(temp != NULL)
		if (temp->vertex == end)
		{
			prev->next = temp->next;
			free(temp);
			break;
		}
		else
		{
			prev = temp;
			temp = temp->next;
		}

	if(g->kinds == Non_directional)
	{
		prev = g->node[end];
		temp = g->node[end]->next;

		while(temp != NULL)
			if(temp->vertex == start)
			{
				prev->next = temp->next;
				free(temp);
				break;
			}
			else
			{
				prev = temp;
				temp = temp->next;
			}
	}
}

void ShowListGraphInfo(ListGraph g)
{
	printf("-----List  Graph Info-----\n");
	printf("Vertex Num : %d\n", g.vertex);
	printf("Edge Num : %d\n", g.edge);
	printf("Kinds : %s\n", (g.kinds == Directional ? "Directional" : "Non Directional"));
	for(int i=0; i<g.vertex; i++)
	{
		Node* temp = g.node[i]->next;
		while(temp != NULL)
		{
			printf("Edge: %d %d\n", i, temp->vertex);
			temp = temp->next;
		}
	}
	printf("--------------------------\n");
}

void BFS(ListGraph g)
{
	char vertex[] = { 'A', 'B', 'C', 'D', 'E', 'F' };
	Queue q;
	queue_init(&q, g.vertex);
	
	int* is_searched = (int*)malloc(sizeof(int)*g.vertex);
	for (int i = 0; i < g.vertex; i++)
		is_searched[i] = 0;

	is_searched[0] = 1;
	enqueue(&q, 0);

	while(!is_empty(q))
	{
		int v = dequeue(&q);
		Node* node = g.node[v]->next;
		printf("%c ", vertex[v]);

		while(node != NULL)
		{
			if (is_searched[node->vertex] == 0)
			{
				enqueue(&q, node->vertex);
				is_searched[node->vertex] = 1;
			}
			node = node->next;
		}
	}
}
