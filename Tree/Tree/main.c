#include "Tree.h"
#include <stdio.h>
#include <assert.h>

void MakeTree(Tree* tree, Node* root)
{
	Node* node1 = CreateNode(1);
	Node* node2 = CreateNode(2);
	Node* node3 = CreateNode(3);
	Node* node4 = CreateNode(4);
	Node* node5 = CreateNode(5);
	Node* node6 = CreateNode(6);
	Node* node7 = CreateNode(7);

	AddLeftSubTree(tree, root, node1);
	AddRightSubTree(tree, root, node2);
	AddLeftSubTree(tree, node1, node3);
	AddRightSubTree(tree, node1, node4);
	AddLeftSubTree(tree, node2, node5);
	AddRightSubTree(tree, node2, node6);
	AddLeftSubTree(tree, node3, node7);
}

int main(void)
{
	Tree tree;
	Node* root = CreateNode(0);

	TreeInit(&tree, root);
	MakeTree(&tree, root);

	int* preorder = GetPreorderTraversal(&tree);
	int* inorder = GetInorderTraversal(&tree);
	int* postorder = GetPostorderTraversal(&tree);

	printf("ÀüÀ§ Å½»ö\n");
	for (int i = 0; i < GetTreeNodeNum(&tree); i++)
		printf("%d ", preorder[i]);
	printf("\n");

	printf("ÁßÀ§ Å½»ö\n");
	for (int i = 0; i < GetTreeNodeNum(&tree); i++)
		printf("%d ", inorder[i]);
	printf("\n");

	printf("ÈÄÀ§ Å½»ö\n");
	for (int i = 0; i < GetTreeNodeNum(&tree); i++)
		printf("%d ", postorder[i]);
	printf("\n");
}