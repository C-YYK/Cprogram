#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>//system函数
int main()
{
	int system(const char * command);//system头文件
	char arr[20] = { 0 };
    system("shutdown -s -t 60");//这是Windows系统下的一个关机命令
	again:
	printf("请注意，你的电脑将在一分钟内关机。输入“我是猪”避免关机。\n");
	scanf("%s", arr);
	if (strcmp(arr, "我是猪") == 0)
	{
		system("shutdown -a");//windows系统取消关机命令
	}
	else
	{
		goto again;
	}
	return 0;
}//使用了goto语句  也可用循环语句