#include <stdio.h>
#include <stdlib.h>
#define  N  10
/*  */
int numTeam(int nums[],int length);
int numTeam(int nums[],int length)
{
	int i,j,temp;
	
	for(i = 1;i <= length - 1;i++)
	{
		for(j = 1;j <= length - i;j++)
		{
			if(nums[j-1] < nums[j])
			{
				temp = nums[j-1];
				nums[j-1] = nums[j];
				nums[j] = temp;
				
				
			}
		}
	} 
}
int main(int argc, char *argv[]) {
	int i,height[N],num;
	
	srand((unsigned)time(NULL));
	for(i = 1;i <= N;i++)
	{
		num = rand() % 99 + 10;
	}
	
	for(i = 0;i < N;i++)
	{
		printf("Input nums:");
		scanf("%d",&height[i]);
	}
	numTeam(height,N);
	
	for(i = 0;i < N;i++)
	{
		printf("%d\t",height[i]);
	}
	getch();
	return 0;
}
