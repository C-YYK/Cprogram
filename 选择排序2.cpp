#include<stdio.h>//—°‘Ò≈≈–Ú2(…˝–Ú£©
int main()
{
	int a[] = { 1,3,2,4,5,6,7,8,9 };
	int sz = sizeof(a) / sizeof(a[0]);
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = i + 1; j < sz; j++)
		{
			int t = 0;
			if (a[j] > a[i])
			{
				t = a[j];
				a[j] = a[i];
				a[i] = t;
			}
		}
	}
	for (int k = 0; k < sz; k++)
	{
		printf("%d ", a[k]);
	}
	return 0;
}