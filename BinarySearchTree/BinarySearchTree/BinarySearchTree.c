#include "BinarySearchTree.h"
#include <stdlib.h>
#include <stdio.h>

void ReplaceLocation(Node* parent, Node* child, Node* replace);

void InitBST(Node** root)
{
	*root = NULL;
}

void InsertBST(Node** node, const int data)
{
	if(*node == NULL)
	{
		*node = (Node*)malloc(sizeof(Node));

		(*node)->data = data;
		(*node)->left = NULL;
		(*node)->right = NULL;

		printf("%d %p\n", data, *node);

		return;
	}

	if ((*node)->data < data)
		InsertBST(&(*node)->right, data);
	else
		InsertBST(&(*node)->left, data);
}

Node* SearchBST(Node** root, const int data)
{
	Node* current = *root;

	while(current != NULL)
	{
		if (current->data < data)
			current = current->right;
		else if(current->data > data)
			current = current->left;
		else
			return current;
	}

	return NULL;
}

void RemoveBST(Node** root, const int data)
{
	Node* prev_current = NULL;
	Node* current = *root;
	Node* prev_replace = NULL;
	Node* replace = NULL;

	while (1)
	{		
		if (current == NULL)
		{
			printf("%d is not exist...\n", data);

			return;
		}

		if (current->data < data)
		{
			prev_current = current;
			current = current->right;
		}
		else if (current->data > data)
		{
			prev_current = current;
			current = current->left;
		}
		else
			break;
	}

	if (current->left != NULL)
	{
		prev_replace = current;
		replace = current->left;

		while (replace->right != NULL)
		{
			prev_replace = replace;
			replace = replace->right;
		}

		ReplaceLocation(prev_replace, replace, replace->left);
	}
	else if(current->right != NULL)
	{
		prev_replace = current;
		replace = current->right;

		while (replace->left != NULL)
		{
			prev_replace = replace;
			replace = replace->left;
		}

		ReplaceLocation(prev_replace, replace, replace->right);
	}
	
	if (prev_current != NULL)
	{
		ReplaceLocation(prev_current, current, replace);

		if (replace != NULL)
		{
			replace->left = current->left;
			replace->right = current->right;
		}
	}
	else
	{
		*root = replace;
		replace->left = current->left;
		replace->right = current->right;
	}

	free(current);
}

void ReplaceLocation(Node* parent, Node* child, Node* replace)
{
	
	if (parent->left == child)
		parent->left = replace;
	else
		parent->right = replace;
}

void Preorder(Node* root)
{
	if (root == NULL)
		return;

	printf("%p : %d\n", root, root->data);
	Preorder(root->left);
	Preorder(root->right);
}
