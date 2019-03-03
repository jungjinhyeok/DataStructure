#include "stack.h"

void StackInit(Stack* stack, const int size)
{
	Init(&stack->datas, size);
}

void Push(Stack* stack, const int data)
{
	Add(&stack->datas, data);
}

int Pop(Stack* stack)
{
	int result;
	const int index = GetDataNum(&stack->datas) - 1;

	GetData(&stack->datas, &result, index);
	RemoveLast(&stack->datas);

	return result;
}

int Top(Stack stack)
{
	int result;
	const int index = GetDataNum(&stack.datas) - 1;

	GetData(&stack.datas, &result, index);

	return result;
}

int IsEmpty(Stack stack)
{
	if (GetDataNum(&stack.datas) > 0)
		return 0;

	return 1;
}


