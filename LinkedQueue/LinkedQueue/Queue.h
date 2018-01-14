#include "LinkedList.h"

typedef struct queue
{
	linked_list datas;
} Queue;


void queue_init(Queue* q);
void enqueue(Queue* q, const int data);
int dequeue(Queue* q);
int get_rear(Queue q);
int is_empty(const Queue q);

