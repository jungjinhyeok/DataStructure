#include "Stack.h"
#include <stddef.h>

void StackInit(Stack* st)
{
	Init(&(st->datas));
}

void Push(Stack* st, const int data)
{
	AddFirst(&(st->datas), data);
}

int Pop(Stack* st)
{
	node* nd = GetHeadNode(&(st->datas));
	const int result = nd->data;
	RemoveFirst(&(st->datas));

	return result;
}

int Top(Stack st)
{
	node* nd = GetHeadNode(&(st.datas));
	return nd->data;
}

int IsEmpty(Stack st)
{
	if (GetHeadNode(&st.datas) == NULL)
		return 1;
	
	return 0;
}



