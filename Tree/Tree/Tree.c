#include "Tree.h"
#include <stdlib.h>
#include <stdio.h>

void PreorderTraversal(Node* current, int* datas, int* cnt);
void InorderTraversal(Node* current, int* datas, int* cnt);
void PostorderTraversal(Node* current, int* datas, int* cnt);

Node* CreateNode(const int data)
{
	Node* nd = (Node*)malloc(sizeof(Node));

	nd->data = data;
	nd->left = NULL;
	nd->right = NULL;

	return nd;
}

void TreeInit(Tree* tree, Node* root)
{
	tree->count = 1;
	tree->root = root;
}

void AddLeftSubTree(Tree* tree, Node* nd, Node* left)
{
	nd->left = left;
	tree->count++;
}

void AddRightSubTree(Tree* tree, Node* nd, Node* right)
{
	nd->right = right;
	tree->count++;
}

void RemoveLeftSubTree(Tree* tree, Node* nd)
{
	if (nd->left == NULL)
		printf("왼쪽 자식 노드가 없습니다...\n");
	
	free(nd->left);
	nd->left = NULL;
}

void RemoveRightSubTree(Tree* tree, Node* nd)
{
	if (nd->right == NULL)
		printf("오른쪽 자식 노드가 없습니다...\n");
	
	free(nd->right);
	nd->right = NULL;
}

int GetLeftSubTreeData(Node* nd)
{
	if (nd->left)
		return nd->left->data;

	printf("왼쪽 자식 노드가 없습니다...\n");
	return 0;
}

int GetRightSubTreeData(Node* nd)
{
	if (nd->right)
		return nd->right->data;
		
	printf("오른쪽 자식 노드가 없습니다...\n");
	return 0;
}

int* GetPreorderTraversal(Tree* tree)
{
	int* datas = (int*)malloc(sizeof(int) * tree->count);
	int index = 0;

	PreorderTraversal(tree->root, datas, &index);

	return datas;
}

int* GetInorderTraversal(Tree* tree)
{
	int* datas = (int*)malloc(sizeof(int) * tree->count);
	int index = 0;

	InorderTraversal(tree->root, datas, &index);

	return datas;
}

int* GetPostorderTraversal(Tree* tree)
{
	int* datas = (int*)malloc(sizeof(int) * tree->count);
	int index = 0;

	PostorderTraversal(tree->root, datas, &index);

	return datas;
}

int GetTreeNodeNum(Tree* tree)
{
	return tree->count;
}

void PreorderTraversal(Node* current, int* datas, int* index) 
{
	if (current == NULL)
		return;

	datas[(*index)++] = current->data;
	PreorderTraversal(current->left, datas, index);
	PreorderTraversal(current->right, datas, index);
}

void InorderTraversal(Node* current, int* datas, int* index) 
{
	if (current == NULL)
		return;

	InorderTraversal(current->left, datas, index);
	datas[(*index)++] = current->data;
	InorderTraversal(current->right, datas, index);
}

void PostorderTraversal(Node* current, int* datas, int* index) 
{
	if (current == NULL)
		return;

	PostorderTraversal(current->left, datas, index);
	PostorderTraversal(current->right, datas, index);
	datas[(*index)++] = current->data;
}