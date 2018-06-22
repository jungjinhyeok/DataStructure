#include "sort.h"
#include <stdlib.h>

void Combine(int* nums, const int len);

void BubbleSort(int* nums, const int len)
{
	for (int i = len - 1; i>0; i--)
		for (int j = 0; j<i; j++)
			if (nums[j] > nums[j + 1])
			{
				const int temp = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = temp;
			}
}

void SelectionSort(int* nums, const int len)
{
	for (int i = 0; i < len; i++) 
	{
		int index = i;
		int min = nums[i];

		for (int j = i + 1; j < len; j++)
			if (min > nums[j])
			{
				min = nums[j];
				index = j;
			}

		const int temp = nums[i];
		nums[i] = nums[index];
		nums[index] = temp;
	}
}

void InsertionSort(int* nums, const int len)
{
	for (int i = 1; i<len; i++)
	{
		const int temp = nums[i];
		int index = i;

		while (temp < nums[--index] && index >= 0)
			nums[index + 1] = nums[index];

		nums[index + 1] = temp;
	}
}

void MergeSort(int* nums, const int len)
{
	if (len > 1)
	{
		const int mid = len / 2;
		MergeSort(&nums[0], mid);
		MergeSort(&nums[mid], len - mid);

		Combine(&nums[0], len);
	}
}

void QuickSort(int* nums, const int len)
{
	if (len == 1)
		return;

	int index = 0;

	for (int i = 1; i<len; i++)
		if (nums[0] > nums[i])
		{
			const int temp = nums[++index];
			nums[index] = nums[i];
			nums[i] = temp;
		}

	const int temp = nums[index];
	nums[index] = nums[0];
	nums[0] = temp;

	if (index > 0)
		QuickSort(&nums[0], index);

	if (index < len - 1)
		QuickSort(&nums[index + 1], (len - 1) - index);
}

void Combine(int* nums, const int len)
{
	int* sorted = (int*)malloc(sizeof(int)*len);
	int s_index = 0;
	int l_index = 0;
	int r_index = len / 2;

	while (l_index < (len / 2) && r_index < len)
	{
		if (nums[l_index] < nums[r_index])
			sorted[s_index++] = nums[l_index++];
		else
			sorted[s_index++] = nums[r_index++];
	}

	if (l_index >= (len / 2))
		for (int i = r_index; i < len; i++)
			sorted[s_index++] = nums[i];
	else
		for (int i = l_index; i < (len / 2); i++)
			sorted[s_index++] = nums[i];

	for (int i = 0; i < len; i++)
		nums[i] = sorted[i];

	free(sorted);
}
