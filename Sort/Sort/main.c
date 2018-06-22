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

	printf("-무작위로 섞음-\n");
	Shuffle(datas, LEN);
	PrintData(datas, LEN);

	printf("---버블 정렬---\n");
	BubbleSort(datas, LEN);	
	PrintData(datas, LEN);

	printf("-무작위로 섞음-\n");
	Shuffle(datas, LEN);
	PrintData(datas, LEN);
	
	printf("---선택 정렬---\n");
	SelectionSort(datas, LEN);
	PrintData(datas, LEN);

	printf("-무작위로 섞음-\n");
	Shuffle(datas, LEN);
	PrintData(datas, LEN);

	printf("---병합 정렬---\n");
	MergeSort(datas, LEN);
	PrintData(datas, LEN);

	printf("-무작위로 섞음-\n");
	Shuffle(datas, LEN);
	PrintData(datas, LEN);

	printf("---퀵  정렬---\n");
	QuickSort(datas, LEN);
	PrintData(datas, LEN);

	return 0;
}
