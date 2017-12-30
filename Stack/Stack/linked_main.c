#include "LinkedStack.h"
#include <stdio.h>

int main(void)
{
	LinkedStack stack;
	int datas[5] = { 2, 3, 5, 1, 0 };

	Init(&stack);

	for (int i = 0; i < 5; i++)
	{
		printf("Push %d \n", datas[i]);
		Push(&stack, datas[i]);
	}

	printf("--------------\n");
	while (!IsEmpty(stack))
	{
		printf("Top %d\n", Top(stack));
		printf("Pop %d \n", Pop(&stack));
		printf("--------------\n");
	}
}
