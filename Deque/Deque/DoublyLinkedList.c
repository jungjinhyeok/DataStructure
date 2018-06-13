#include "DoublyLinkedList.h"
#include <stdlib.h>
#include <stdio.h>

void Init(DoublyLinkedList* list)
{
	list->head = NULL;
	list->tail = NULL;
}

void AddHead(DoublyLinkedList* list, const int data)
{
	Node* node = (Node*)malloc(sizeof(Node));

	node->data = data;

	if (list->head == NULL && list->tail == NULL)
	{
		node->next = NULL;
		node->prev = NULL;

		list->head = node;
		list->tail = node;

		return;
	}

	list->head->prev = node;
	node->prev = NULL;
	node->next = list->head;

	list->head = node;
}

void AddTail(DoublyLinkedList* list, const int data)
{
	Node* node = (Node*)malloc(sizeof(Node));

	node->data = data;

	if(list->head == NULL && list->tail == NULL)
	{
		node->next = NULL;
		node->prev = NULL;

		list->head = node;
		list->tail = node;

		return;
	}

	list->tail->next = node;
	node->next = NULL;
	node->prev = list->tail;

	list->tail = node;
}

void RemoveHead(DoublyLinkedList* list)
{
	if(list->head == NULL && list->tail == NULL)
	{
		printf("데이터가 없습니다...\n");

		return;
	}

	Node* temp = list->head;

	list->head = list->head->next;

	if (list->head == NULL)
		list->tail = NULL;
	else
		list->head->prev = NULL;

	free(temp);
}

void RemoveTail(DoublyLinkedList* list)
{
	if(list->head == NULL && list->tail == NULL)
	{
		printf("데이터가 없습니다...\n");

		return;
	}

	Node* temp = list->tail;

	list->tail = list->tail->prev;

	if (list->tail == NULL)
		list->head = NULL;
	else 
		list->tail->next = NULL;

	free(temp);
}

Node* GetHead(DoublyLinkedList* list)
{
	return list->head;
}

Node* GetTail(DoublyLinkedList* list)
{
	return list->tail;
}

Node* GetNextNode(Node* node)
{
	return node->next;
}

Node* GetPrevNode(Node* node)
{
	return node->prev;
}





