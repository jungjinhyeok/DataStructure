#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "heap.h"

void ShuffleNumbers(int* nums)
{
	for(int i=0; i<10; i++)
	{
		nums[i] = i;
	}

	for(int i=0; i<10; i++)
	{
		const int index1 = rand() % 10;
		const int index2 = rand() % 10;

		const int temp = nums[index1];
		nums[index1] = nums[index2];
		nums[index2] = temp;
	}

	for (int i = 0; i < 10; i++)
		printf("%d ", nums[i]);
}

void HeapSort(int nums[10])
{
	Heap hp;
	Init(&hp);

	for (int i = 0; i < 10; i++)
		Insert(&hp, nums[i]);

	for (int i = 0; i < 10; i++)
		printf("%d ", Pop(&hp));
}

int main(void)
{
	int nums[10];
	srand(time(NULL));

	for (int i = 0; i < 10; i++)
	{
		printf("Step %d\n", i + 1);
		ShuffleNumbers(nums);
		printf("\n==========================\n");
		HeapSort(nums);
		printf("\n==========================\n");
	}
}
