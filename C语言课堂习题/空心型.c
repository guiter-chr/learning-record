#include<stdio.h>
#include<stdlib.h>
int main()
{    
	int i = 0, j = 0;
	int a = 3;
	char c = 3;//心形的ASCII代码是3
	for (i = 0; i < 3;i++)//行数  3行
	{
		for (j = 0; j < 5- 2*i;j++)//空格， 5，3，1个空格
		{
			printf(" ");
		}
		for (j = 0; j < 5+ 4 * i;j++)//打印符号
		{
			printf("%c", c);
		}
		for (j = 0; j < 9- 4 * i;j++)//打印空格
		{
			printf(" ");
		}
		for (j = 0; j < 5+ 4 * i;j++)//打印符号
		{
			printf("%c", c);
		}
 
		printf("\n");
 
    }
	for (i = 0; i < 3; i++)//打印行数3行
	{
		for (j = 0; j < 29;j++)//打印符号
			printf("%c", c);
		printf("\n");//打印空格
 
	}
	for (i = 0; i < 6+ 1; i++)//    打印6行
	{
		for (j = 0; j < 2 * i + 1; j++)//打印空格
			printf(" ");
		for (j = 0; j < 27-4 * i; j++)
			printf("%c", c);
		printf("\n");
	}
	for (i = 0; i <1; i++)//打印行数1行
	{
		for (j = 0; j < 14; j++)//打印空格
			printf(" ");
		for (j = 0; j < 1; j++)//打印符号
			printf("%c", c);
		printf("\n");
	}
 
	system("pause");
	return 0;
}
