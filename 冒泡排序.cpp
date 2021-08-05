#include<stdio.h>
int main()
{
	int arr[] = { 9,8,7.6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz-1; i++)//ÌËÊý
	{
		for (int j = 0; j < sz-1-i; j++)
		{
			if (arr[j] > arr[j + 1])//½»»»
			{
				int t = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = t;
			}
		}
	}
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}