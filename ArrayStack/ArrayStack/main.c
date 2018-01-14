#include "Stack.h"
#include <stdio.h>

int main(void)
{
	Stack stack;
	int datas[5] = { 2, 3, 5, 1, 0 };

	StackInit(&stack, 5);

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