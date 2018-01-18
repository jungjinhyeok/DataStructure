typedef struct circular_array_list
{
	int* datas;
	int size;
	int front;
	int rear;
} CircularArrayList;

void Init(CircularArrayList* list, const int size);
void Add(CircularArrayList* list, const int data);
void RemoveFront(CircularArrayList* list);
void RemoveRear(CircularArrayList* list);
int IsOverflow(CircularArrayList* list);
int GetFront(const CircularArrayList list, int* data);
int GetRear(const CircularArrayList list, int* data);
