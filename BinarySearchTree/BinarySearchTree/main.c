#include "BinarySearchTree.h"
#include <stdio.h>

void SearchResult(Node* root, const int data)
{
	Node* n = SearchBST(&root, data);

	if (n == NULL)
		printf("Search Result: %d Fail\n", data);
	else
		printf("Search Result: %p %d\n", n, data);
}

void DeleteNode(Node* root, const int data)
{
	printf("-------%d Remove-------\n", data);
	RemoveBST(&root, data);
	Preorder(root);
}

int main(void)
{
	int list[] = {4, 0, 1, 2, 9, 6, 5, 8, 7, 3};

	Node* root;

	InitBST(&root);

	printf("-------Add Data-------\n");
	for (int i = 0; i < 10; i++)
		InsertBST(&root, list[i]);

	printf("-------Preorder-------\n");
	Preorder(root);

	printf("-------SearchBST-------\n");
	for (int i = 0; i < 10; i++)
	{
		SearchResult(root, list[i]);
	}
	SearchResult(root, 11);
	SearchResult(root, 33);

	printf("-------RemoveBST-------\n");
	RemoveBST(&root, 11);

	DeleteNode(root, 3);
	DeleteNode(root, 9);
	DeleteNode(root, 2);
	DeleteNode(root, 1);
	DeleteNode(root, 0);
	DeleteNode(root, 4);

	return 0;
}