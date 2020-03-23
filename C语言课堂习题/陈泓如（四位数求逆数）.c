#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num,i,A,unitDigit,tenDigit,hundDigit,thousDigit;
	
	printf("输入一个四位数：");
	srand( (unsigned)time(NULL) );
	for(i = 1;i <= 50;i++)
	{
		num = rand() %9999 + 1;
		
		thousDigit = num / 1000;
		hundDigit = num % 1000 / 100;
		tenDigit = num % 1000 % 100 / 10;
		unitDigit = num % 10;
		
		A = unitDigit*1000 + tenDigit*100 + hundDigit*10 + thousDigit;
		
		printf("%d：%d => %d \n",i,num,A);
	} 
	return 0;
}









