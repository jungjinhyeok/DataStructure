#include "ArrayList.h"
#include <stdio.h>
#include <stdlib.h>

void Init(array_list* list, const int size)
{
	list->datas = (int*)malloc(sizeof(int)*size);
	list->count = 0;
}

void Add(array_list* list, const int data)
{
	list->datas[list->count] = data;
	list->count++;
}

void RemoveFirst(array_list* list)
{
	if(list->count == 0)
	{
		printf("데이터가 없습니다...\n");
		return;
	}

	for(int i=1; i<list->count-1; i++)
	{
		list->datas[i - 1] = list->datas[i];
	}

	list->count--;
}

void RemoveLast(array_list* list)
{
	if (list->count == 0)
	{
		printf("데이터가 없습니다...\n");
		return;
	}

	list->count--;
}

void Remove(array_list* list, const int index)
{
	if(list->count > 0)
	{
		for(int i=index; i<list->count - 1; i++)
			list->datas[i] = list->datas[i + 1];

		list->count--;

		return;
	}

	printf("데이터가 없습니다...\n");
}

int GetData(array_list* list, int* data, const int pos)
{
	if(list->count <= pos)
	{
		printf("해당 인덱스에 데이터가 없습니다...\n");
		return 0;
	}

	*data = list->datas[pos];

	return 1;
}

int GetDataNum(array_list* list)
{
	return list->count;
}
