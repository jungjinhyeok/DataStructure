#include "CircularArrayList.h"
#include <stdio.h>

int main(void)
{
	CircularArrayList list;

	Init(&list, 5);

	for (int i = 0; i < 5; i++)
		Add(&list, i);

	Add(&list, 11);

	for (int i = 0; i < 2; i++)
	{
		int data = -1;

		GetFront(list, &data);
		RemoveFront(&list);
		printf("%d ", data);
	}

	for (int i = 2; i < 5; i++)
	{
		int data = -1;

		GetRear(list, &data);
		RemoveRear(&list);
		printf("%d ", data);
	}
}
