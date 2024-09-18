#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h >
int main(void)
{
	int sum = 0;
	int total = 0;
	int a = 0;
	int back;
	printf("请输入总价\n");
	scanf("%d", &total);
	while (sum < total)
	{
		printf("请输入本次投入金额：\n");
		scanf("%d", &a);
		if (a != 1 && a != 2 && a != 5)
		{
			printf("投入金额数错误\n");
			a = 0;
		}
		else
		{
			sum = sum + a;
		}
	}
	back = sum - total;
	printf("找零：%d\n", back);
	return 0;
}