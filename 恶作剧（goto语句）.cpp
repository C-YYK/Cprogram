#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>//system����
int main()
{
	int system(const char * command);//systemͷ�ļ�
	char arr[20] = { 0 };
    system("shutdown -s -t 60");//����Windowsϵͳ�µ�һ���ػ�����
	again:
	printf("��ע�⣬��ĵ��Խ���һ�����ڹػ������롰����������ػ���\n");
	scanf("%s", arr);
	if (strcmp(arr, "������") == 0)
	{
		system("shutdown -a");//windowsϵͳȡ���ػ�����
	}
	else
	{
		goto again;
	}
	return 0;
}//ʹ����goto���  Ҳ����ѭ�����