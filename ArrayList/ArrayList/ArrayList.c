#include "ArrayList.h"

void init(array_list* list)
{
	list->count = 0;
	list->cur_pos = 0;
}

void insert_data(array_list* list, const int data)
{
	list->datas[list->count] = data;
	list->count++;
}

void remove_data(array_list* list, const int index)
{
	if(list->count > 0)
	{
		for(int i=index; i<list->count - 1; i++)
			list->datas[i] = list->datas[i + 1];

		list->count--;

		return;
	}

	printf("�����Ͱ� �����ϴ�...\n");
}

int get_data(array_list* list, int* data)
{
	if(list->count > 0)
	{
		*data = list->datas[list->cur_pos++];

		if(list->cur_pos > list->count)
		{
			list->cur_pos = 0;
			return 0;
		}

		return 1;
	}

	return 0;
}