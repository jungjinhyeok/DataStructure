#include <stdio.h>
#include "CircularLinkedList.h"

void PrintDatas(CircularLinkedList list, const int num)
{
	int data;

	for(int i=0; i<num;i++)
	{
		GetNextNodeData(&list, &data);
		printf("%d ", data);
	}
	printf("\n");
}

int main(void)
{
	CircularLinkedList list;

	Init(&list);

	for (int i = 0; i < 2; i++)
		AddHead(&list, i);

	for (int i = 2; i < 5; i++)
		AddTail(&list, i);

	AddSpecific(&list, 1, 11);
	AddSpecific(&list, 3, 33);

	PrintDatas(list, 7);

	Remove(&list, 0);
	Remove(&list, 2);

	PrintDatas(list, 10);
}
