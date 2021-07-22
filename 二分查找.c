//二分查找
#include<stdio.h>
int base_two(int arr[] , int k, int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid]<k)
		{
			left = mid+1;
		}
		else if (arr[mid]>k)
		{
			right = mid-1;
		}
		else
		{
			return mid;
		}
	}
	return-1;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 1;
	scanf("%d", &k);
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret =base_two(arr,k,sz);
	if (ret == -1)
	{
		printf("没有找到该数字\n");
	}
	else
	{
		printf("该数字下标为 %d \n", ret);
	}

	return 0;
}