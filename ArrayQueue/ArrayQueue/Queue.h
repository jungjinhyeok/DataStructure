#include "ArrayList.h"

typedef struct queue
{
	array_list datas;
}Queue;

void queue_init(Queue* q, const int size);
void enqueue(Queue* q, const int data);
int dequeue(Queue* q);
int get_rear(Queue q);
int is_empty(Queue q);