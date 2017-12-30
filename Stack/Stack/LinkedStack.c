#include "LinkedStack.h"
#include <stdlib.h>

void Init(LinkedStack* stack)
{
	stack->top = NULL;
}

void Push(LinkedStack* stack, int data)
{
	Node* nd = (Node*)malloc(sizeof(Node));

	nd->data = data;
	
	if(stack->top == NULL)
		nd->next = NULL;
	else
		nd->next = stack->top;

	stack->top = nd;
}

int Pop(LinkedStack* stack)
{
	const int data = stack->top->data;

	Node* temp = stack->top;
	stack->top = stack->top->next;

	free(temp);

	return data;
}

int Top(const LinkedStack stack)
{
	return stack.top->data;
}

int IsEmpty(const LinkedStack stack)
{
	if (stack.top == NULL)
		return 1;

	return 0;
}
