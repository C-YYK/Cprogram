//��������i����ӡi*i������
#include<stdio.h>
int main()
{
	printf("*******************************\n");
	printf("Ϊ�����ۣ�������1-9֮������֣�\n");
	printf("*******************************\n");
	int i = 0;
	scanf("%d",&i);
	for (int n = 1; n <= i; n++)//n ��
	{
		for (int j=1;j<=n;j++)//j ��
		{
			if (j<=n)
			   printf("%d ", j);//��ӡ����
		}
		for (int a=n;a<i;a++)
		{
			printf("* ");//���հ״�
		}
		printf("\n");//����
	}
	return 0;
}