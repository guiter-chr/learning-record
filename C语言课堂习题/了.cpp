#include <iostream>
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char* argv[]) {
	int num,i;
//1-6	
	 srand( (unsigned)time(NULL));
	for(i = 1;1 <= 10;i++)
	{
		num = rand() % 6 + 1;
		printf("%d\t",num);
	}
	return 0;
}
