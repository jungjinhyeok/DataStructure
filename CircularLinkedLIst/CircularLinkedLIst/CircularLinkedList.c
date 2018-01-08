#include "CircularLinkedList.h"
#include <stdlib.h>
#include <stdio.h>

void Init(CircularLinkedList* list)
{
	list->tail = NULL;
	list->count = 0;
	list->current = NULL;
}

void AddHead(CircularLinkedList* list, const int data)
{
	Node* node = (Node*)malloc(sizeof(Node));

	node->data = data;

	if (list->tail == NULL)
	{
		list->tail = node;
		list->tail->next = node;

		return;
	}
	
	node->next = list->tail->next;
	list->tail->next = node;
	list->count++;
}

void AddTail(CircularLinkedList* list, const int data)
{
	Node* node = (Node*)malloc(sizeof(Node));

	node->data = data;

	if (list->tail == NULL)
	{
		list->tail = node;
		list->tail->next = node;

		return;
	}

	node->next = list->tail->next;
	list->tail->next = node;
	list->tail = node;
	list->count++;
}

void AddSpecific(CircularLinkedList* list, const int pos, const int data)
{
	if(list->count < pos)
	{
		printf("해당 위치에 데이터를 저장할 수 없습니다...\n");

		return;
	}

	Node* node = (Node*)malloc(sizeof(Node));
	node->data = data;

	Node* prev = list->tail;
	Node* current = list->tail->next;

	for(int i=0; i<pos; i++)
	{
		prev = current;
		current = current->next;
	}

	prev->next = node;
	node->next = current;

	list->count++;
}

void Remove(CircularLinkedList* list, const int pos)
{
	if (list->count < pos)
	{
		printf("해당 위치에 데이터를 삭제할 수 없습니다...\n");

		return;
	}

	Node* prev = list->tail;
	Node* current = list->tail->next;
	list->count--;
	for (int i = 0; i<pos; i++)
	{
		prev = current;
		current = current->next;
	}

	prev->next = current->next;

	free(current);
}

int GetNextNodeData(CircularLinkedList* list, int* data)
{
	if (list->count == 0)
	{
		printf("데이터를 삭제할 수 없습니다...\n");

		return 0;
	}
	
	if (list->current == NULL)
		list->current = list->tail->next;

	*data = list->current->data;
	list->current = list->current->next;

	return 1;
}



