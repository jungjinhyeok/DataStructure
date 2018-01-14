#include "Queue.h"


void queue_init(Queue* q)
{
	Init(&q->datas);
}

void enqueue(Queue* q, const int data)
{
	AddLast(&q->datas, data);
}

int dequeue(Queue* q)
{
	const int result = GetHeadNode(&q->datas)->data;
	RemoveFirst(&q->datas);

	return result;
}

int get_rear(Queue q)
{
	const int result = GetHeadNode(&q.datas)->data;

	return result;
}

int is_empty(const Queue q)
{
	if (GetDataNums(q.datas) > 0)
		return 0;
	
	return 1;
}



