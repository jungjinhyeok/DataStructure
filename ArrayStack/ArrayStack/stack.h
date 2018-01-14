#include "ArrayList.h"

typedef struct stack
{
	array_list datas;
}Stack;

void StackInit(Stack* stack, const int size);
void Push(Stack* stack, const int data);
int Pop(Stack* stack);
int Top(Stack stack);
int IsEmpty(Stack stack);