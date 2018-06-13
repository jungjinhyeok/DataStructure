#ifndef TREE
#define TREE

typedef struct node {
	int data;
	struct node* left;
	struct node* right;
}Node;

typedef struct tree
{
	Node* root;
	int count;
}Tree;

Node* CreateNode(const int data);
void TreeInit(Tree* tree, Node* root);
void AddLeftSubTree(Tree* tree, Node* nd, Node* left);
void AddRightSubTree(Tree* tree, Node* nd, Node* right);
void RemoveLeftSubTree(Tree* tree, Node* nd);
void RemoveRightSubTree(Tree* tree, Node* nd);
int GetLeftSubTreeData(Node* nd);
int GetRightSubTreeData(Node* nd);
int* GetPreorderTraversal(Tree* tree);
int* GetInorderTraversal(Tree* tree);
int* GetPostorderTraversal(Tree* tree);
int GetTreeNodeNum(Tree* tree);

#endif // !TREE



