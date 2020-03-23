#include <stdio.h>
#include <stdlib.h>

/* ½×³ËÎÊÌâ  */

int factorial(int n);
int factorial(int n)
{
	if(n == 0)
	{
		return 1;
	}
	
	return n * factorial(n-1);
} 
int main(int argc, char *argv[]) {
	int num,result;
	
	printf("input num:");
	scanf("%d",&num);
	
	result = factorial(num);
	printf("num!=%d",result);
	getch();
	return 0;
}
