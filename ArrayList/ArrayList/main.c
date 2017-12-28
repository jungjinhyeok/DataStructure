#include "ArrayList.h"

int main(void)
{
	array_list list;
	int data;
	int datas[5] = {1, 2, 3, 4, 5};

	init(&list);
	
	for (int i = 0; i < 5; i++)
		insert_data(&list, datas[i]);

	printf("�迭 ����Ʈ�� ������ �߰�\n");

	while(get_data(&list, &data))
	{
		printf("%d ", data);
	}

	remove_data(&list, 2);

	printf("\n----------------\n");
	printf("Index 2 ���� ��\n");

	while (get_data(&list, &data))
	{
		printf("%d ", data);
	}

	return 0;
}
