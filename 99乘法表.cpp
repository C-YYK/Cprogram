//��ӡ99�˷���
#include<stdio.h>
int main()
{
	int i = 1;//i����
	for (i = 1; i <= 9; i++)
	{
		int j = 1;//j����
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", i, j, i*j);//-2��ʾ�����
		}
		printf("\n");//����
	}
	return 0;
}