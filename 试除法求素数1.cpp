//判断100-200间素数 试除法
#include<stdio.h>
int main()
{
	int sum = 0;
	int i = 0;
	for ( i = 100; i <= 200; i++)
	{
		int j = 0;
		for (j = 2; j < i; j++)
		{
			if (i%j == 0)
				break;
		}
		if (j == i)
		{
			printf("%d ", i);
			sum++;
		}
	}
	printf("一共有%d个素数", sum);
	return 0;
}