//猜数字小游戏
//1.生成一个1-100之间的随机数
//2.猜数字
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()//创建一个菜单界面
{
	printf("**********************************\n");
	printf("*****    1.play    0.exit    *****\n");
	printf("**********************************\n");
}
void game()//创建游戏内容
{
	int a = 0;//定义a为1-100之间的随机值
	int  b = 0;//定义b为输入的数值
	a = rand()%100+1;//生产1-100之间的整数
	//printf("%d\n", a);——可打印以观察是否出问题
	while (1)
	{
		printf("请猜数字!\n");
		scanf("%d",&b);
		if (b > a)
			printf("猜大了！\n");
		else if (b < a)
			printf("猜小了!\n");
		else
		{
			printf("恭喜你！猜对啦！\n");
			break;//退出循环
		}
	}
}
int main()
{
	int count=0;
	do
	{
		srand((unsigned int)time(NULL));//time的用法
		menu();//调用menu()
		printf("请输入你的选择=>");
		scanf("%d",&count);
		switch (count)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏！\n");
			break;
		default:
			printf("输入错误！\n");
		}
	} while (count);
	return 0;
}