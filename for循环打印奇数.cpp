//用for循环语句编写一个打印1-100之间的奇数代码
#include<stdio.h>
int main()
{
	int i = 1;
	for (i = 1; i <= 100; i = i + 2)//for(只执行一次；判断条件 ；循环一次后执行 )
	{
		printf("%d ", i);
	}
	return 0;
}