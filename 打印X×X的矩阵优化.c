//��ӡx*x������Ż�
#include<stdio.h>
int main()
{
	printf("****************************\n");
	printf("********����������**********\n");
	printf("****************************\n");
	int x = 0;
	scanf("%d", &x);
	for (int i=1;i<=x;i++)//��
	{
		for (int j = 1; j <= i; j++)//��
		{
			if (j <= i)
				printf("%-2d ", j);
		}
		for (int k=0 ; k<x-i ; k++)
		{
			printf("%-2c","*");//��������Ϊʲô���Ժ��Ϊ�������ţ�������
		}
		printf("\n");//����
	}

	return 0;
}