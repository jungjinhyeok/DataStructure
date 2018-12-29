#pragma once

typedef struct node
{
	int data;
	struct node* left;
	struct node* right;
} Node;

void InitBST(Node** root);
void InsertBST(Node** node, const int data);
Node* SearchBST(Node** root, const int data);
void RemoveBST(Node** root, const int data);
void Preorder(Node* root);
