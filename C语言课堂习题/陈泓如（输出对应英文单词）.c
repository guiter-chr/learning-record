#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		int num,i;
//1-5	
	 srand( (unsigned)time(NULL));
	for(i = 1;i <= 200;i++)
	{
		num = rand()% 5 + 1;
		switch(num)
		{
			case 1: printf("Num = %d,One\t",num);break;
			case 2: printf("Num = %d,Two\t",num);break;
			case 3: printf("Num = %d,Three\t",num);break;
			case 4: printf("Num = %d,Four\t",num);break;
			case 5: printf("Num = %d,Five\t",num);break;		
		}
	}
	getch();
	return 0;
}
