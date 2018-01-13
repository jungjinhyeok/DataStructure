#include "LinkedList.h"

typedef struct stack
{
	linked_list datas;
}Stack;

void StackInit(Stack* st);
void Push(Stack* st, const int data);
int Pop(Stack* st);
int Top(const Stack st);
int IsEmpty(const Stack st);