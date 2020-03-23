#include <stdio.h>
#include <stdlib.h>
#define N 100 
/*  */
void Series(int nums[],int length);
void Series(int nums[],int length)
{
	int i;
	nums[0] = 0;
	nums[1] = 1;
	nums[2] = 1;
	for(i = 3;i < length;i++)
	{
		nums[i] = nums[length-1] + nums[length-2] + nums[length-3];
		
	}
	
}
//输出length个数据 
void printNums(int nums[],int length)
{
	int i;
	
	for(i = 0;i < length;i++)
	{
		printf("%d\t",nums[i]);
	}
	return;
}
int main(int argc, char *argv[]) {
	int Num[N],i;
	
	Series(Num,N);
	printNums(Num,N); 
	
	getch();
	return 0;
}
