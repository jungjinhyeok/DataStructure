#include "ArrayStack.h"
#include <stdlib.h>

void Init(ArrayStack* stack, const int size)
{
	stack->datas = (int*)malloc(sizeof(int)*size);
	stack->count = 0;
}

void Push(ArrayStack* stack, int data)
{
	stack->datas[stack->count++] = data;
}

int Pop(ArrayStack* stack)
{
	const int data = stack->datas[stack->count - 1];
	stack->count--;

	return data;
}

int Top(ArrayStack* stack)
{
	return stack->datas[stack->count - 1];
}

int IsEmpty(ArrayStack* stack)
{
	if (stack->count > 0)
		return 0;
	return 1;
}


