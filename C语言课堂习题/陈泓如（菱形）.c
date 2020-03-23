#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		int n,i,j,k;			//i=行数，b=星数， c=空格 
	
	printf("Please input lines :");	//正三角形行数 
	scanf("%d",&n);
	for(i = 1;i <= n;i++)
	{
		//输出一行：空格，星星，换行
		//输出n-i空格 
		for(j = 1;j <= n - i;j++)
		{
			printf(" ");
		}
		//输出2i-1星星 
		for(k = 1;k <= 2 * i - 1;k++)
		{
			printf("*");
		}
		//输出一个换行 
		printf("\n");
	 } 	

	for(i = 1;i <= n;i++)
	{
		//i-1个空格
		for(j = 1;j <= i - 1;j++)
		{
			printf(" ");
		} 
		//2(n-i)+1个星星
		for(k = 1;k <= 2 * (n - i) + 1;k++)
		{
			printf("*");
		}
		//1换行 
		printf("\n");
	}
	getch();
	return 0;
}
