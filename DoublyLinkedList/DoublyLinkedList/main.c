#include "DoublyLinkedList.h"
#include <stdio.h>

void PrintHeadSearch(DoublyLinkedList list)
{
	Node* node = GetHead(&list);

	printf("�Ӹ� Ž��: ");

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

	printf("���� Ž��: ");

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
		printf("�Ӹ� ��� ����\n");
		RemoveHead(&list);
	}

	PrintHeadSearch(list);

	for (int i = 0; i < 5; i++)
	{
		printf("���� ��� ����\n");
		RemoveTail(&list);
	}

	PrintHeadSearch(list);
}
