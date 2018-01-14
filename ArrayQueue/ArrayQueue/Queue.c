#include "Queue.h"

void queue_init(Queue* q, const int size)
{
	Init(&q->datas, size);
}

void enqueue(Queue* q, const int data)
{
	Add(&q->datas, data);
}

int dequeue(Queue* q)
{
	int result;
	
	GetData(&q->datas, &result, 0);
	RemoveFirst(&q->datas);

	return result;
}

int get_rear(Queue q)
{
	int result;

	GetData(&q.datas, &result, 0);

	return result;
}

int is_empty(Queue q)
{
	if (GetDataNum(&q.datas) > 0)
		return 0;

	return 1;
}




