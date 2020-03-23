#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		int i,b,c,n;			//i=行数，b=星数， c=空格 
	
	printf("Please input lines :");	//正三角形行数 
	scanf("%d",&n);
		

		for(i = 1;i < n  ;i++)
		{
			for(c = 0;c < i - 1;c++)		//空格个数与当前行数相同 
				printf(" ");
			for(b = 2*n-1;b > 1;b=b-2)		//找规律 
				printf("*");
			printf("\n");
		}
	return 0;
}
