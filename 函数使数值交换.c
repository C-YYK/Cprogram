//使用函数实现两个数的交换
#include<stdio.h>
void swap(int* x,int* y)
{
	int tmp = 0;
	tmp = *x;
	*x =*y;
	*y = tmp;
}
int main()
{
	int a = 4;
	int b = 6;
	swap(&a, &b);
	printf("a=%d b=%d", a, b);
	return 0;
}uan