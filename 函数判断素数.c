#include<stdio.h>
#include<math.h>
//дһ�������ж�һ��ֵ�ǲ�������
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
			printf("�����Ϊ������\n");
		else
			printf("���������������\n");
	}
	else
		printf("���������1������\n");
	//goto again;  �����������ж�
	return 0;
}