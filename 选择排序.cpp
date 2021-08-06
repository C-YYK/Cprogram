#include<stdio.h>
int main()//选择排序
{
	int arr[] = { 2,3,4,5,6,7,8,1,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz - 1; i++)//趟数
	{
		int k = i;
		int j = 0;
		for ( j = i + 1; j < sz - 1; j++)//次数
		{
			if (arr[j] < arr[k])
				k = j;
		}
		if (i != j)//交换
		{
			int t = arr[i];
			arr[i] = arr[k];
			arr[k] = t;
		}
	}
	for (int a = 0; a < sz ; a++)//打印
	{
		printf("%d ",arr[a]);
	}
	return 0;
}