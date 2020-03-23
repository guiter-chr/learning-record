#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char ch_input=0;
	int i_input=0;
	
	printf("\nPlease input a char:");
	ch_input = getchar();
	printf("\nThe char[%c] ASCII code is %d",ch_input,ch_input);
	
	printf("\nPlease input a number(1~255):");
	scanf("%d",&i_input);
	printf("\nThe number %d ASCII char is [%c]",i_input,i_input);
	
	
	getch();
	return 0;
}
