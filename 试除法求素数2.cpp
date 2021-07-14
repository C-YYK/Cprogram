//判断100-200间素数 试除法
#include<stdio.h>
#include<amp_math.h>
int main()
{
	int i = 0;
	int sum = 0;
	for (i = 100; i <= 200; i++)
	{
		int j = 0;
		for (j = 2; j <= sqrt(i); j++)
		{
			if (0 == i % j)
			break;
		}
		if (j > sqrt(i))
		{
			sum++;
			printf("%d ", i);
		}
	}
	printf("一共有 %d 个素数", sum);
	return 0;
}