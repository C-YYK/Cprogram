//ֱ�����ֲ���
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int k = 1;
	int left = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int right = sz - 1;
	int mid1 = (left + right) / 3;
	int mid2 = (right + left+1) / 3 * 2;
	if (k > arr[right] || k < arr[left])
		printf("δ�д����֣�\n");
	if (k == arr[left])
		printf("���ҵ����±�Ϊ %d", left);
	if (k == arr[right])
		printf("���ҵ����±�Ϊ %d", right);
	if (k == arr[mid1])
		printf("���ҵ����±�Ϊ %d", mid1);
	if (k == arr[mid2])
		printf("���ҵ����±�Ϊ %d", mid2);
	while (k>arr[mid2] &&k<arr[right])
	{
		int mid = (mid2 + right) / 2;
		if (k > arr[mid])
			left = mid + 1;
		else if (k < arr[mid])
			right = mid - 1;
		else
		{
			printf("���ҵ����±�Ϊ %d", mid);
			break;
		}
	}
	while (k < arr[mid1] && k>arr[left])
	{
		int mid = (left + mid1) / 2;
		if (arr[mid] > k)
			right = mid - 1;
		else if (arr[mid] < k)
			left = mid + 1;
		else
		{
			printf("���ҵ����±�Ϊ %d", mid);
			break;
		}
	}
	while (k > arr[mid1] && k <arr[mid2])
	{
		int mid = (mid1 + mid2) / 2;
		if (arr[mid] > k)
			mid2 = mid - 1;
		else if (arr[mid] < k)
			mid1 = mid + 1;
		else
		{
			printf("���ҵ����±�Ϊ %d", mid);
			break;
		}
	}
	return 0;
}