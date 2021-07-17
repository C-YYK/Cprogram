//用函数打印2000到3000之间的闰年
#include<stdio.h>
int is_leap_year(int x)
{
	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
		return 1;
	else
		return 0;
}
int main()
{
	for (int i = 2000; i <= 3000; i++)
	{
		if (is_leap_year(i) == 1)
			printf("%d ", i);
 	}

	return 0;
}