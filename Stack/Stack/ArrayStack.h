typedef struct array_stack
{
	int* datas;
	int count;
} ArrayStack;

void Init(ArrayStack* stack, const int size);
void Push(ArrayStack* stack, int data);
int Pop(ArrayStack* stack);
int Top(ArrayStack* stack);
int IsEmpty(ArrayStack* stack);