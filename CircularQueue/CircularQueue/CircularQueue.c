#include "CircularQueue.h"

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
	int result = -1;

	if(GetFront(q->datas, &result))
		RemoveFront(&q->datas);

	return result;
}

int get_rear(const Queue q)
{
	int result = -1;

	GetFront(q.datas, &result);

	return result;
}

int is_empty(const Queue q)
{
	if (GetDataNum(q.datas) > 0)
		return 0;

	return 1;
}
