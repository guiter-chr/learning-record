#include <stdio.h>
#include <stdlib.h>

/*  *
   ***
  *****
 *******
 Ҫ������һ������n�����n�� 
  */
int main(int argc, char *argv[]) {
	int n,i,j,k;		//i=������j=�ո�����k=������ 
	 
	printf("Please input lines:");
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
	return 0;
}
