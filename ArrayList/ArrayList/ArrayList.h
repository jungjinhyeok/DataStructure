#include <stdio.h>

typedef struct arraylist
{
	int datas[10];
	int count;
	int cur_pos;
}array_list;

void Init(array_list* list);
void Add(array_list* list, const int data);
void RemoveFirst(array_list* list);
void RemoveLast(array_list* list);
void Remove(array_list* list, const int index);
int GetData(array_list* list, int* data, const int pos);
int GetDataNum(array_list* list);
