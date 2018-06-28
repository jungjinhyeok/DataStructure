#include "Search.h"

int BinarySearch(int* list, int data, int low, int high)
{
	const int mid = (low + high) / 2;

	if (low > high)
		return -1;

	if (list[mid] > data)
		return BinarySearch(list, data, low, mid - 1);
	else if (list[mid] < data)
		return BinarySearch(list, data, mid + 1, high);
	else
		return mid;
}

int InterpolationSearch(int* list, int data, int low, int high)
{
	while (low <= high)
	{
		const int mid = ((data - list[low]) / (list[high] - list[low])) * (high - low) + low;

		if (list[mid] > data)
			high = mid - 1;
		else if (list[mid] < data)
			low = mid + 1;
		else
			return mid;
	}

	return -1;
}
