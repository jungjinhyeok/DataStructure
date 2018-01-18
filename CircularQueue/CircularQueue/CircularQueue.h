#include "CircularArrayList.h"

typedef struct queue
{
	CircularArrayList datas;
}Queue;

void queue_init(Queue* q, const int size);
void enqueue(Queue* q, const int data);
int dequeue(Queue* q);
int get_rear(const Queue q);
int is_empty(const Queue q);