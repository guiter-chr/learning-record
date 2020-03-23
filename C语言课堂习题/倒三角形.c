#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* *****
    ***
     *
     行数	空格	星星	换行	总行数：n 
     1		0		7		1
     2		1		5		1
     3		2		3		1
     4		3		1		1
     
     i		i-1	 2(n-i)+1   1
*/
int main(int argc, char *argv[]) {
	int n,i,j,k;		//i=行数,j=空格,k=星星,n=总行数； 
	
	printf("输出行数：");
	scanf("%d",&n);
	
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
    return 0 ;
}
