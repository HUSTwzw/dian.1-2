#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h >
int main(void)
{
	int sum = 0;
	int total = 0;
	int a = 0;
	int back;
	printf("�������ܼ�\n");
	scanf("%d", &total);
	while (sum < total)
	{
		printf("�����뱾��Ͷ���\n");
		scanf("%d", &a);
		if (a != 1 && a != 2 && a != 5)
		{
			printf("Ͷ����������\n");
			a = 0;
		}
		else
		{
			sum = sum + a;
		}
	}
	back = sum - total;
	printf("���㣺%d\n", back);
	return 0;
}