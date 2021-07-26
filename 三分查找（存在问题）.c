//三分查找
#include<stdio.h>
int three_find(int arr[], int m, int sz)
{
	int ret = 0;
	int left = 0;
	int right = sz - 1;
	int mid1= (left + right) / 3;
	int mid2 = (right+1) * 2 / 3;
	if (m > arr[right] || m < arr[left])// 0 1 2 3 4 5 6 7 
		return -1;
	while (m<arr[mid1])
	{
		int mid = (left + mid1) / 2;
		if (arr[mid] > m)
			mid1 = mid - 1;
		else if (arr[mid] < m)
			left = mid + 1;
		else
		{
			int ret = mid;
			break;
		}
	}
	while (m>arr[mid2])
	{
		int mid = (mid2 + right) / 2;
		if (arr[mid] > m)
			right = mid - 1;
		else if (arr[mid] < m)
			mid2 = mid + 1;
		else
		{
			int ret = mid;
			break;
		}
	}
	while (m<arr[mid2]&&m>arr[mid1])
	{
		int mid = (mid1 + mid2) / 2;
		if (arr[mid] > m)
			mid2 = mid - 1;
		else if (arr[mid] < m)
			mid1 = mid + 1;
		else
		{
			int ret = mid;
			break;
		}
	}
	return ret;
}
int main()
{
	int arr[] = { 0,1,2,3,4,5,6,7,8,9,10,11 };
	int m = 0;
	scanf("%d", &m);
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = -1;
	ret = three_find(arr[12], m, sz);
	if (ret == -1)
	{
		printf("未找到此数字！\n");
	}
	else
	{
		printf("找到该数字，该数字的下标是%d\n", &ret);
	}
	return 0;
}