typedef struct node
{
	int data;
	struct node* next;
} Node;

typedef struct circular_linked_list
{
	int count;
	Node* tail;
	Node* current;
}CircularLinkedList;

void Init(CircularLinkedList* list);
void AddHead(CircularLinkedList* list, const int data);
void AddTail(CircularLinkedList* list, const int data);
void AddSpecific(CircularLinkedList* list, const int pos, const int data);
void Remove(CircularLinkedList* list, const int pos);
void GetNextNodeData(CircularLinkedList* list, int* data);