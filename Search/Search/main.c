#include <stdio.h>
#include "Search.h"

void IsExistByBinarySearch(int list[], const int data)
{
	const int index = BinarySearch(list, data, 0, 9);

	if (index == -1)
		printf("%d 없음\n", data);
	else
		printf("%d는 %d에 존재\n", data, index);
}

void IsExistByInerpolationSearch(int list[], const int data)
{
	const int index = InterpolationSearch(list, data, 0, 9);

	if (index == -1)
		printf("%d 없음\n", data);
	else
		printf("%d는 %d에 존재\n", data, index);
}

int main(void)
{
	int list[] = {0,2,3,4,9,14,23,32,35,45};
	int datas[] = { 4, 20, 9, 13, 14 };

	printf("--------이진 탐색--------\n");

	for (int i = 0; i < 5; i++)
		IsExistByBinarySearch(list, datas[i]);

	printf("--------보간 탐색--------\n");

	for (int i = 0; i < 5; i++)
		IsExistByInerpolationSearch(list, datas[i]);

	return 0;
}
