#include "CircularArrayList.h"
#include <stdlib.h>
#include <stdio.h>

void Init(CircularArrayList* list, const int size)
{
	list->datas = (int*)malloc(sizeof(int)*(size+1));
	list->size = size + 1;
	list->front = 0;
	list->rear = 0;
}

void Add(CircularArrayList* list, const int data)
{
	if (IsOverflow(list))
	{
		printf("배열안에 공간이 없습니다...\n");

		return;
	}

	list->rear = (list->rear + 1) % list->size;
	list->datas[list->rear] = data;
}

void RemoveFront(CircularArrayList* list)
{
	if(list->front == list->rear)
	{
		printf("저장된 데이터가 없습니다...\n");

		return;
	}

	list->front = (list->front + 1) % list->size;
}

void RemoveRear(CircularArrayList* list)
{
	if (list->front == list->rear)
	{
		printf("저장된 데이터가 없습니다...\n");

		return;
	}

	list->rear= list->rear--;

	if (list->rear == -1)
		list->rear = list->size - 1;
}

int IsOverflow(CircularArrayList* list)
{
	if (list->rear == list->size - 1 && list->front == 0)
		return 1;

	if (list->rear + 1 == list->front)
		return 1;

	return 0;
}

int GetFront(const CircularArrayList list, int* data)
{
	if(list.front == list.rear)
		return 0;

	*data = list.datas[(list.front + 1) % list.size];

	return 1;
}

int GetRear(const CircularArrayList list, int* data)
{
	if (list.front == list.rear)
		return 0;

	*data = list.datas[list.rear];

	return 1;
}