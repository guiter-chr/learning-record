#include <stdio.h>
#include <stdlib.h>
 
/* */

int main(int argc, char *argv[]) {
	int i,j,temp;
	int ary[10];
	
	srand((unsigned)time(NULL));
	
	for(i = 0;i < 10;i++)
	{
		ary[i] = rand() % 89 + 10;
	}
	
	for(i = 0;i < 9;i++)
	{
		for(j = 0;j < 9 - i;j++)
		{
			if(ary[j] < ary[j+1])
			{
				temp = ary[j+1];
				ary[j+1] = ary[j];
				ary[j] = temp;
			}
		}
	}
	
	for(i = 0;i < 10;i++)
	{
		printf("%d\t",ary[i]);
	}
	getch();
	return 0;
}
