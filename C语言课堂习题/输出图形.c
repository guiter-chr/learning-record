#include <stdio.h>
#include <stdlib.h>

/*  *
   ***
  *****
 *******
 要求输入一个行数n，输出n行 
  */
int main(int argc, char *argv[]) {
	int n,i,j,k;		//i=行数，j=空格数，k=星星数 
	 
	printf("Please input lines:");
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
	return 0;
}
