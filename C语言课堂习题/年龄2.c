#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c,d;
	
	for(a = 1;a <= 50;a++)
	{
		for(b = 1;b <= 50;b++)
		{
			for(c = 1;c <=50;c++)
			{
				for(d = 1;d <=100;d++)
				if(a * b * c == 2450 && a + b + c == 0.5 * d)
				printf("a=%d\t b=%d\t c=%d\t d=%d\t\n",a,b,c,d);
			}
		}
	} 
	getch();
	return 0;
}
