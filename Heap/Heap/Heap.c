#include "heap.h"
#include <stdlib.h>

void Init(Heap* h)
{
	h->num = 0;
}

void Insert(Heap* h, int data)
{
	h->data[h->num] = data;
	int index = h->num++;

	while(index > 0)
	{
		if (h->data[index] < h->data[(index - 1) / 2])
		{
			const int temp = h->data[index];
			h->data[index] = h->data[(index - 1) / 2];
			h->data[(index - 1) / 2] = temp;

			index = (index - 1) / 2;
		}
		else
			break;
	}
}

int Pop(Heap* h)
{
	const int result = h->data[0];
	h->data[0] = h->data[h->num-1];
	h->num--;

	int parent = 0;

	while((parent*2) - 1 < h->num - 1)
	{
		int sub_index = (parent + 1) * 2 - 1;

		if((parent + 1)*2 < h->num && h->data[sub_index + 1] < h->data[sub_index])
			sub_index++;

		if (h->data[sub_index] < h->data[parent])
		{
			const int temp = h->data[parent];
			h->data[parent] = h->data[sub_index];
			h->data[sub_index] = temp;

			parent = sub_index;
		}
		else
			break;
	}

	return result;
}

int GetNum(Heap* h)
{
	return h->num;
}