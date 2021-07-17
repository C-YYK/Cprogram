#include<stdio.h>
#include<math.h>
//写一个函数判断一个值是不是素数
int su(int x)
{
	int i;
	for (i = 2; i < sqrt(x); i++)
	{
		if (x%i == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int  a = 0;
	//again:
	scanf("%d", &a);
	if (a > 1)
	{
		if (su(a)==1)
			printf("这个数为素数！\n");
		else
			printf("这个数不是素数！\n");
	}
	else
		printf("请输入大于1的整数\n");
	//goto again;  可用于连续判断
	return 0;
}