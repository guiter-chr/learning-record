#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		int i,b,c,n;			//i=������b=������ c=�ո� 
	
	printf("Please input lines :");	//������������ 
	scanf("%d",&n);
		

		for(i = 1;i < n  ;i++)
		{
			for(c = 0;c < i - 1;c++)		//�ո�����뵱ǰ������ͬ 
				printf(" ");
			for(b = 2*n-1;b > 1;b=b-2)		//�ҹ��� 
				printf("*");
			printf("\n");
		}
	return 0;
}
