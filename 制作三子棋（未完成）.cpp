#include<stdio.h>
//������ʹ�û�����������������ɸ���Ϸ
//��������
//��Ҫ3*3���¸�ʽ
//   |   |   
//---|---|---
//   |   | 
//---|---|---
//   |   |
//˼�룻forѭ��ʵ�֣���5*11���θ�ʽ��ӡ
//��"   |"Ϊһ����λ����ż����Ϊ"---|"
//��iΪ�� ��jΪ��; i 1 3 5 
int main()
{
	int i = 3;
	int j = 3;
	//��ӡ��ʼ��������
	for (int x = 1; x <=5; x++)
	{
		for (int y = 1; y <=3; y++)
		{
			if (x%2==0)//��2 4 ��
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
			else if(x%2==1)//��1 3 5�� 
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
	again://gotoλ�� 2
	printf("��ѡ��=>  1.play  2.exit ");
	case2://gotoλ�� 3
	int b;//Ϊ�洢�û���ѡ��ĵ�ַ
	scanf("%d", &b);
	if (b == 1)
	{
		printf("����������Ҫ�µ�λ��");
		//������ֵ�������������
		int a;//����д��ַ�洢��a��
		scanf("%d", &a);
		int c = 0;//ʮλ��������
		int d = 0;//��λ��������
		c = a / 10;//ȡ��
		d = a % 10;//ȡ��
		//Ŀǰ�����оٷ��������ֲ�֪����ڵڶ�������ʱ���õ�һ���Ĵ浵��
		switch (a)  
		{
		case 11:  
			for (int x = 1; x <= 5; x++)
			{
				for (int y = 1; y <= 3; y++)
				{
					if (x % 2 == 0)//��2 4 ��
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
					else if (x % 2 == 1)//��1 3 5�� 
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
			printf("������λ�ô�������������");
			goto case2;
		}
		//����ʹ��forѭ��



	}
	//ѡ���˳���Ϸ
	else if (b == 2)
	{
		goto case1;
	}
	//�����������
	else
	{
		printf("����������������룡");
		goto again;
	}





	case1://gotoλ�� 1
	return 0;
}