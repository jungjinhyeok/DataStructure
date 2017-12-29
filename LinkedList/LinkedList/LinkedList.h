typedef struct node
{
	int data;
	struct node* next;
}node;

typedef struct linked_list
{
	int count;
	node* head;
	node* current;
	node* before;
}linked_list;

void Init(linked_list* list);
void Insert(linked_list* list, const int data);
void Remove(linked_list* list);
node* GetNode(linked_list* list);
int GetDataNums(linked_list list);