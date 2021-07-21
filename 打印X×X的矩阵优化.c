//打印x*x矩阵的优化
#include<stdio.h>
int main()
{
	printf("****************************\n");
	printf("********请输入数字**********\n");
	printf("****************************\n");
	int x = 0;
	scanf("%d", &x);
	for (int i=1;i<=x;i++)//列
	{
		for (int j = 1; j <= i; j++)//行
		{
			if (j <= i)
				printf("%-2d ", j);
		}
		for (int k=0 ; k<x-i ; k++)
		{
			printf("%-2c","*");//？？疑问为什么调试后变为其他符号？？？？
		}
		printf("\n");//换行
	}

	return 0;
}