//������С��Ϸ
//1.����һ��1-100֮��������
//2.������
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()//����һ���˵�����
{
	printf("**********************************\n");
	printf("*****    1.play    0.exit    *****\n");
	printf("**********************************\n");
}
void game()//������Ϸ����
{
	int a = 0;//����aΪ1-100֮������ֵ
	int  b = 0;//����bΪ�������ֵ
	a = rand()%100+1;//����1-100֮�������
	//printf("%d\n", a);�����ɴ�ӡ�Թ۲��Ƿ������
	while (1)
	{
		printf("�������!\n");
		scanf("%d",&b);
		if (b > a)
			printf("�´��ˣ�\n");
		else if (b < a)
			printf("��С��!\n");
		else
		{
			printf("��ϲ�㣡�¶�����\n");
			break;//�˳�ѭ��
		}
	}
}
int main()
{
	int count=0;
	do
	{
		srand((unsigned int)time(NULL));//time���÷�
		menu();//����menu()
		printf("���������ѡ��=>");
		scanf("%d",&count);
		switch (count)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("�������\n");
		}
	} while (count);
	return 0;
}