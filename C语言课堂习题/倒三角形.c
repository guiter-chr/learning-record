#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* *****
    ***
     *
     ����	�ո�	����	����	��������n 
     1		0		7		1
     2		1		5		1
     3		2		3		1
     4		3		1		1
     
     i		i-1	 2(n-i)+1   1
*/
int main(int argc, char *argv[]) {
	int n,i,j,k;		//i=����,j=�ո�,k=����,n=�������� 
	
	printf("���������");
	scanf("%d",&n);
	
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
    return 0 ;
}
