#include<stdio.h>
#include<stdlib.h>
int main()
{    
	int i = 0, j = 0;
	int a = 3;
	char c = 3;//���ε�ASCII������3
	for (i = 0; i < 3;i++)//����  3��
	{
		for (j = 0; j < 5- 2*i;j++)//�ո� 5��3��1���ո�
		{
			printf(" ");
		}
		for (j = 0; j < 5+ 4 * i;j++)//��ӡ����
		{
			printf("%c", c);
		}
		for (j = 0; j < 9- 4 * i;j++)//��ӡ�ո�
		{
			printf(" ");
		}
		for (j = 0; j < 5+ 4 * i;j++)//��ӡ����
		{
			printf("%c", c);
		}
 
		printf("\n");
 
    }
	for (i = 0; i < 3; i++)//��ӡ����3��
	{
		for (j = 0; j < 29;j++)//��ӡ����
			printf("%c", c);
		printf("\n");//��ӡ�ո�
 
	}
	for (i = 0; i < 6+ 1; i++)//    ��ӡ6��
	{
		for (j = 0; j < 2 * i + 1; j++)//��ӡ�ո�
			printf(" ");
		for (j = 0; j < 27-4 * i; j++)
			printf("%c", c);
		printf("\n");
	}
	for (i = 0; i <1; i++)//��ӡ����1��
	{
		for (j = 0; j < 14; j++)//��ӡ�ո�
			printf(" ");
		for (j = 0; j < 1; j++)//��ӡ����
			printf("%c", c);
		printf("\n");
	}
 
	system("pause");
	return 0;
}
