typedef struct node
{
	int data;
	struct node* next;
}node;

typedef struct linked_list
{
	int count;
	node* head;
	node* tail;
	node* current;
}linked_list;

void Init(linked_list* list);
void AddLast(linked_list* list, const int data);
void AddFirst(linked_list* list, const int data);
void RemoveFirst(linked_list* list);
void RemoveLast(linked_list* list);
void Remove(linked_list* list, const int pos);
node* GetHeadNode(linked_list* list);
node* GetNextNode(linked_list* list);
int GetDataNums(linked_list list);