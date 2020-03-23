#include <stdio.h>
#include <stdlib.h>

/* */
int main(int argc, char *argv[]) {
	int num,A,uniDigit,tenDigit,hunDigit;
	
	printf("输入一个三位数:");
	scanf("%d",&num);
	
	hunDigit = num / 100;
	tenDigit = num % 100 / 10;
	uniDigit = num % 10;
	
	A = uniDigit * 100 + tenDigit * 10 + hunDigit * 1;
	printf(" %d\n",A);
	
	getch();
	return 0;
}
