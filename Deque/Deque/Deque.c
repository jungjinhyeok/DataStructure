#include "Deque.h"
#include <stddef.h>

void DequeInit(Deque* dq)
{
	Init(&dq->datas);
}

void AddFront(Deque* dq, const int data)
{
	AddHead(&dq->datas, data);
}

void AddRear(Deque* dq, const int data)
{
	AddTail(&dq->datas, data);
}

int RemoveFront(Deque* dq)
{
	const int result = GetHead(&dq->datas)->data;
	RemoveHead(&dq->datas);

	return result;
}

int RemoveRear(Deque* dq)
{
	const int result = GetTail(&dq->datas)->data;
	RemoveTail(&dq->datas);

	return result;
}

int GetFront(Deque* dq)
{
	return GetHead(&dq->datas)->data;
}

int GetRear(Deque* dq)
{
	return GetTail(&dq->datas)->data;
}

int IsEmpty(Deque* dq)
{
	if (GetHead(&dq->datas) == NULL)
		return 1;

	return 0;
}




