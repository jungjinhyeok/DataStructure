#include <stdio.h>

typedef struct arraylist
{
	int datas[10];
	int count;
	int cur_pos;
}array_list;

void init(array_list* list);
void insert_data(array_list* list, const int data);
void remove_data(array_list* list, const int index);
int get_data(array_list* list, int* data);
