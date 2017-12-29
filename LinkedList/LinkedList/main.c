#include <stdio.h>
#include "LinkedList.h"
#include <stdlib.h>

void PrintDatas(linked_list* list)
{
	node* nd = GetNode(list);

	printf("데이터 개수: %d\n", GetDataNums(*list));
	printf("데이터 출력: ");

	while (nd)
	{
		printf("%d ", nd->data);
		nd = GetNode(list);
	}

	printf("\n");
}

void RemoveData(linked_list* list, const int data)
{
	printf("%d 데이터 제거\n", data);

	node* nd = GetNode(list);

	while (nd)
	{
		if (nd->data == data)
			Remove(list);
		nd = GetNode(list);
	}
}

int main(void)
{
	linked_list list;

	Init(&list);

	for (int i = 0; i < 5; i++)
		Insert(&list, i);

	PrintDatas(&list);

	RemoveData(&list, 0);
	RemoveData(&list, 3);
	PrintDatas(&list);

	
	return 0;
}
