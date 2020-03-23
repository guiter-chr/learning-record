#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
	1 + 1/2 + 1/3 +...+ 1/100 = ?
	1 + 1/2 + 2/3 +...+ 99/100 = ?
	1 - 1/2 + 1/3 -1/4 +...+1/99 - 1/100 = 0.6872
	*/
int main(int argc, char *argv[]) {
//	float i;//或 int i; 
//	float cnt = 1;
	
//	{
	//	cnt = cnt * i;
	//	cnt *= i 
//	cnt += (i - 1)/i;		//或cnt += 1.0 * i/i + 1 
//	}
//	printf("cnt=%f",cnt);
//	getch();	
	
	float i;//或 int i; 
	float cnt = 0;
	
	for(i = 1;i <= 100;i++)		//或for(i = 1;i <= 99;i++) 
	{
	//	cnt = cnt * i;
	//	cnt *= i 
	cnt += 1/i * pow(-1,i-1) ;		//或cnt += 1.0 * i/i + 1 
	}
	printf("cnt=%f",cnt);
	
	
	
	
	getch();
	
	return 0;
}
