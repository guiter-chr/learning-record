#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num;
	
	printf("Pleass input num(1-5):");
	scanf("%d",&num);
	
	switch(num)
	{
		case 1: printf("One");break;
		case 2: printf("Two");break;
		case 3: printf("Three");break;
		case 4: printf("Four");break;
		case 5: printf("Five");break;
		default : printf("Error");
	}
	
	getch();
	return 0;
}
