//�ж�100-200������ �Գ���
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
	printf("һ����%d������", sum);
	return 0;
}