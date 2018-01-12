#include "LinkedList.h"
#include <stdio.h>
#include <stdlib.h>

void Init(linked_list* list)
{
	list->count = 0;
	list->head = NULL;
	list->tail = NULL;
	list->current = NULL;
}

void AddLast(linked_list* list, const int data)
{
	node* nd = (node*)malloc(sizeof(node));

	nd->data = data;
	nd->next = NULL;

	if (list->head == NULL)
	{
		list->head = nd;
		list->tail = nd;
	}
	else
	{
		list->tail->next = nd;
		list->tail = nd;
	}

	list->count++;
}

void AddFirst(linked_list* list, const int data)
{
	node* nd = (node*)malloc(sizeof(node));

	nd->data = data;	 
	nd->next = list->head;

	if (list->head == NULL)
	{
		list->head = nd;
		list->tail = nd;
	}
	else
	{
		list->head = nd;
	}

	list->count++;
}

void RemoveFirst(linked_list* list)
{
	if(list->count == 0)
	{
		printf("데이터가 없습니다...");
		return;
	}
	node* temp = list->head;
	list->head = list->head->next;
	list->count--;

	free(temp);
}

void RemoveLast(linked_list* list)
{
	if (list->count == 0)
	{
		printf("데이터가 없습니다...");
		return;
	}

	node* temp = list->tail;
	node* nd = list->head;
	list->count--;

	while (nd->next != list->tail)
		nd = nd->next;

	nd->next = NULL;
	list->tail = nd;

	free(temp);
}

node* GetHeadNode(linked_list* list)
{
	list->current = list->head;

	return list->head;
}

node* GetNextNode(linked_list* list)
{
	if (list->head == NULL)
		return NULL;

	list->current = list->current->next;

	return list->current;
}

int GetDataNums(const linked_list list)
{
	return list.count;
}