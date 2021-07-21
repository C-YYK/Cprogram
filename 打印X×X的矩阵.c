//输入数字i，打印i*i的数字
#include<stdio.h>
int main()
{
	printf("*******************************\n");
	printf("为了美观，请输入1-9之间的数字！\n");
	printf("*******************************\n");
	int i = 0;
	scanf("%d",&i);
	for (int n = 1; n <= i; n++)//n 列
	{
		for (int j=1;j<=n;j++)//j 行
		{
			if (j<=n)
			   printf("%d ", j);//打印数字
		}
		for (int a=n;a<i;a++)
		{
			printf("* ");//填充空白处
		}
		printf("\n");//换行
	}
	return 0;
}