#include<stdio.h>
//求助在使用基础函数情况下如何完成该游戏
//做三子棋
//需要3*3如下格式
//   |   |   
//---|---|---
//   |   | 
//---|---|---
//   |   |
//思想；for循环实现；以5*11矩形格式打印
//以"   |"为一个单位，以偶数行为"---|"
//以i为行 ，j为列; i 1 3 5 
int main()
{
	int i = 3;
	int j = 3;
	//打印初始三子棋表格
	for (int x = 1; x <=5; x++)
	{
		for (int y = 1; y <=3; y++)
		{
			if (x%2==0)//在2 4 行
			{
				if (y < j)
				{
					printf("---|");
				}
				else
				{
					printf("---\n");
				}
			}
			else if(x%2==1)//在1 3 5行 
			{
				if (y >= j)
				{
					printf("   \n");
					int y = 1;
				}
				else
				{
					printf("   |");
				}
			}
		}

	}
	again://goto位置 2
	printf("请选择：=>  1.play  2.exit ");
	case2://goto位置 3
	int b;//为存储用户的选项的地址
	scanf("%d", &b);
	if (b == 1)
	{
		printf("请输入你所要下的位置");
		//将输入值添加于三子棋中
		int a;//将所写地址存储在a中
		scanf("%d", &a);
		int c = 0;//十位数上数字
		int d = 0;//个位数上数字
		c = a / 10;//取行
		d = a % 10;//取列
		//目前尝试列举法；但发现不知如何在第二次下棋时调用第一个的存档；
		switch (a)  
		{
		case 11:  
			for (int x = 1; x <= 5; x++)
			{
				for (int y = 1; y <= 3; y++)
				{
					if (x % 2 == 0)//在2 4 行
					{
						if (y < j)
						{
							printf("---|");
						}
						else
						{
							printf("---\n");
						}
					}
					else if (x % 2 == 1)//在1 3 5行 
					{
						if (y >= j)
						{
							printf("   \n");
							int y = 1;
						}
						else
						{
							printf("   |");
						}
					}
				}

			}
			break;
		case 12:
			break;
		case 13:
			break;
		case 21:
			break;
		case 22:
			break;
		case 23:
			break;
		case 31:
			break;
		case 32:
			break;
		case 33:
			break;
		default:
			printf("所输入位置错误，请重新输入");
			goto case2;
		}
		//尝试使用for循环



	}
	//选择退出游戏
	else if (b == 2)
	{
		goto case1;
	}
	//其他输入情况
	else
	{
		printf("输入错误，请重新输入！");
		goto again;
	}





	case1://goto位置 1
	return 0;
}