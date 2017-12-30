#include "LinkedList.h"
#include <stdlib.h>

void Init(linked_list* list)
{
	list->count = 0;
	list->head = NULL;
	list->current = NULL;
	list->before = NULL;
}

void Insert(linked_list* list, const int data)
{
	node* nd = (node*)malloc(sizeof(node));

	nd->data = data;
	nd->next = NULL;

	if(list->head == NULL)
		list->head = nd;
	else
	{
		node* current = list->head;

		while (current->next != NULL)
			current = current->next;

		current->next = nd;
	}

	list->count++;
}

void Remove(linked_list* list)
{
	node* temp = list->current;
	list->count--;

	if(list->before == NULL)
	{
		list->head = list->head->next;
		list->current = list->head;
		free(temp);

		return;
	}

	list->before->next = list->current->next;
	list->current = list->current->next;

	free(temp);
}

node* GetNode(linked_list* list)
{
	if (list->head == NULL)
		return NULL;

	if (list->current == NULL)
	{
		list->before = NULL;
		list->current = list->head;

		return list->head;
	}

	list->before = list->current;
	list->current = list->current->next;

	return list->current;
}

int GetDataNums(const linked_list list)
{
	return list.count;
}

