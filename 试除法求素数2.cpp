//�ж�100-200������ �Գ���
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
	printf("һ���� %d ������", sum);
	return 0;
}