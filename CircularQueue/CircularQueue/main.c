#include "CircularQueue.h"
#include <stdio.h>

int main(void)
{
	Queue q;
	int datas[5] = { 2, 5, 1, 0, 3 };

	queue_init(&q, 5);

	for (int i = 0; i < 5; i++)
	{
		printf("Enqueue %d\n", datas[i]);
		enqueue(&q, datas[i]);
	}

	enqueue(&q, 11);

	while (!is_empty(q))
	{
		printf("-----------------\n");
		printf("GetRear %d\n", get_rear(q));
		printf("Dequeue %d\n", dequeue(&q));
		printf("-----------------\n");
	}

	printf("%d ", dequeue(&q));
	return 0;
}