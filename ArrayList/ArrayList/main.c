#include "ArrayList.h"

int main(void)
{
	array_list list;
	int data;
	int datas[5] = {1, 2, 3, 4, 5};

	init(&list);
	
	for (int i = 0; i < 5; i++)
		insert_data(&list, datas[i]);

	printf("배열 리스트에 데이터 추가\n");

	while(get_data(&list, &data))
	{
		printf("%d ", data);
	}

	remove_data(&list, 2);

	printf("\n----------------\n");
	printf("Index 2 삭제 후\n");

	while (get_data(&list, &data))
	{
		printf("%d ", data);
	}

	return 0;
}
