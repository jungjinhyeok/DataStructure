#include "Deque.h"
#include <stdio.h>

int main(void)
{
	Deque dq;

	DequeInit(&dq);

	for (int i = 0; i < 3; i++)
	{
		printf("------------\n");
		printf("AddFront: %d \n", i);
		AddFront(&dq, i);
		printf("------------\n");
	}	

	for (int i = 3; i<6; i++)
	{
		printf("------------\n");
		printf("AddRear: %d \n", i);
		AddRear(&dq, i);
		printf("------------\n");
	}

	for(int i=0; i<3; i++)
	{
		printf("------------\n");
		printf("GetRear: %d \n", GetRear(&dq));
		printf("RemoveRear: %d \n", RemoveRear(&dq));
		printf("------------\n");
	}

	while (!IsEmpty(&dq))
	{
		printf("------------\n");
		printf("GetFront: %d \n", GetFront(&dq));
		printf("RemoveFront: %d \n", RemoveFront(&dq));
		printf("------------\n");
	}

	return 0;
}