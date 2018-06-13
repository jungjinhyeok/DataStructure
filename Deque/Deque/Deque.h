#include "DoublyLinkedList.h"

typedef struct deque
{
	DoublyLinkedList datas;
}Deque;

void DequeInit(Deque* dq);
void AddFront(Deque* dq, const int data);
void AddRear(Deque* dq, const int data);
int RemoveFront(Deque* dq);
int RemoveRear(Deque* dq);
int GetFront(Deque* dq);
int GetRear(Deque* dq);
int IsEmpty(Deque* dq);