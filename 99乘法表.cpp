//打印99乘法表
#include<stdio.h>
int main()
{
	int i = 1;//i行数
	for (i = 1; i <= 9; i++)
	{
		int j = 1;//j列数
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", i, j, i*j);//-2表示左对齐
		}
		printf("\n");//换行
	}
	return 0;
}