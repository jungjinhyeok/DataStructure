#include <stdio.h>
#include "LinkedList.h"

void PrintDatas(linked_list* list)
{
	printf("데이터 개수: %d\n", GetDataNums(*list));

	node* nd = GetHeadNode(list);

	while(nd)
	{
		printf("%d ", nd->data);
		nd = GetNextNode(list);
	}
	printf("\n");
}


int main(void)
{
	linked_list list;

	Init(&list);

	for (int i = 0; i < 5; i++)
		AddLast(&list, i);

	PrintDatas(&list);

	RemoveLast(&list);
	RemoveFirst(&list);

	PrintDatas(&list);
	return 0;
}
