#pragma once

typedef struct _heap
{
	int data[1000010];
	int num;
}Heap;

void Init(Heap* h);
void Insert(Heap* h, int data);
int Pop(Heap* h);
int GetNum(Heap* h);