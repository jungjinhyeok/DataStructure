#include "DoublyLinkedList.h"
#include <stdio.h>

void PrintHeadSearch(DoublyLinkedList list)
{
	Node* node = GetHead(&list);

	printf("赣府 沤祸: ");

	while(node)
	{
		printf("%d ", node->data);
		node = GetNextNode(node);
	}

	printf("\n");
}

void PrintTailSearch(DoublyLinkedList list)
{
	Node* node = GetTail(&list);

	printf("部府 沤祸: ");

	while(node)
	{
		printf("%d ", node->data);
		node = GetPrevNode(node);
	}

	printf("\n");
}

int main(void)
{
	DoublyLinkedList list;
	
	Init(&list);

	for (int i = 0; i < 5; i++)
		AddHead(&list, i);
	for (int i = 5; i < 10; i++)
		AddTail(&list, i);
	
	PrintHeadSearch(list);
	PrintTailSearch(list);

	for (int i = 0; i < 5; i++)
	{
		printf("赣府 畴靛 力芭\n");
		RemoveHead(&list);
	}

	PrintHeadSearch(list);

	for (int i = 0; i < 5; i++)
	{
		printf("部府 畴靛 力芭\n");
		RemoveTail(&list);
	}

	PrintHeadSearch(list);
}
