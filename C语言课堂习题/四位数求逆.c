#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num,i,a;
	int unitDigt,tenDigit,hundDigit,thousDigit;
	
	srand((unsigned)time(NULL));
	
	for(i = 1;i <= 50;i++)
	{
		num=rand() %9000 + 1000;
		
		thousDigit = num / 1000;
		hundDigit = num % 1000 / 100;
		tenDigit = num % 1000 % 100 / 10;
		unitDigt = num % 10;
		a = unitDigt * 1000 + tenDigit * 100 + hundDigit * 10 + thousDigit * 1;
		
		printf("%d£º%d => %d\n",i,num,a);
	}
	
	getch();
	return 0;	
}

