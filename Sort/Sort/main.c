#include "sort.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

#define LEN 10

void InitData(int* datas, const int len)
{
	for (int i = 0; i < len; i++)
		datas[i] = i;
}

void Shuffle(int* data, const int len)
{
	for (int i = 0; i<len; i++)
	{
		const int index1 = rand() % len;
		const int index2 = rand() % len;

		const int temp = data[index1];
		data[index1] = data[index2];
		data[index2] = temp;
	}
}

void PrintData(int* data, const int len)
{
	for (int i = 0; i < len; i++)
		printf("%d ", data[i]);

	printf("\n");
}

int main(void)
{
	int datas[LEN];
	
	InitData(datas, LEN);
	srand(time(NULL));

	printf("-�������� ����-\n");
	Shuffle(datas, LEN);
	PrintData(datas, LEN);

	printf("---���� ����---\n");
	BubbleSort(datas, LEN);	
	PrintData(datas, LEN);

	printf("-�������� ����-\n");
	Shuffle(datas, LEN);
	PrintData(datas, LEN);
	
	printf("---���� ����---\n");
	SelectionSort(datas, LEN);
	PrintData(datas, LEN);

	printf("-�������� ����-\n");
	Shuffle(datas, LEN);
	PrintData(datas, LEN);

	printf("---���� ����---\n");
	MergeSort(datas, LEN);
	PrintData(datas, LEN);

	printf("-�������� ����-\n");
	Shuffle(datas, LEN);
	PrintData(datas, LEN);

	printf("---��  ����---\n");
	QuickSort(datas, LEN);
	PrintData(datas, LEN);

	return 0;
}
