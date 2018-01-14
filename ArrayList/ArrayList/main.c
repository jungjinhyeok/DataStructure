#include "ArrayList.h"

void PrintDatas(array_list list, int data)
{
	for (int i = 0; i < GetDataNum(&list); i++)
	{
		GetData(&list, &data, i);
		printf("%d ", data);
	}
}

int main(void)
{
	array_list list;
	int data = 0;
	int datas[5] = {1, 2, 3, 4, 5};

	Init(&list);
	
	for (int i = 0; i < 5; i++)
		Add(&list, datas[i]);

	printf("�迭 ����Ʈ�� ������ �߰�\n");

	PrintDatas(list, data);

	Remove(&list, 2);

	printf("\n----------------\n");
	printf("Index 2 ���� ��\n");

	PrintDatas(list, data);

	return 0;
}
