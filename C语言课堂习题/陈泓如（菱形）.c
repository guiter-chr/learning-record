#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		int n,i,j,k;			//i=������b=������ c=�ո� 
	
	printf("Please input lines :");	//������������ 
	scanf("%d",&n);
	for(i = 1;i <= n;i++)
	{
		//���һ�У��ո����ǣ�����
		//���n-i�ո� 
		for(j = 1;j <= n - i;j++)
		{
			printf(" ");
		}
		//���2i-1���� 
		for(k = 1;k <= 2 * i - 1;k++)
		{
			printf("*");
		}
		//���һ������ 
		printf("\n");
	 } 	

	for(i = 1;i <= n;i++)
	{
		//i-1���ո�
		for(j = 1;j <= i - 1;j++)
		{
			printf(" ");
		} 
		//2(n-i)+1������
		for(k = 1;k <= 2 * (n - i) + 1;k++)
		{
			printf("*");
		}
		//1���� 
		printf("\n");
	}
	getch();
	return 0;
}
