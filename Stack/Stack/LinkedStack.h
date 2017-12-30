typedef struct node
{
	int data;
	struct node* next;
}Node;

typedef struct linked_stack
{
	Node* top;
}LinkedStack;

void Init(LinkedStack* stack);
void Push(LinkedStack* stack, int data);
int Pop(LinkedStack* stack);
int Top(const LinkedStack stack);
int IsEmpty(const LinkedStack stack);