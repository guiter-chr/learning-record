#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "随机数头文件.h" 
#define N 201
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void primeNums(int nums[],int length);
void primeNums(int nums[],int length)
{
	int i,n,m;
	int cnt;
	
	for(i = 0;i < N;i++)
	{
		m = sqrt(nums[i]);
		for( n = 2;n <= m;n++)
		{
			if(nums[i] %n == 0)
			{
				cnt = nums[i];
			}
		}
	}
}
void ascendSort(int nums[],int length);
void ascendSort(int nums[],int length)
{
	int i,j,temp;
	
	for(i = 1;i <= length - 1;i++)
	{
		for(j = 1;j <= length - i;j++)
		{
			if(nums[j-1] > nums[j])
			{
				temp = nums[j-1];
				nums[j-1] = nums[j];
				nums[j] = temp;
			}
		}
	}
}
int main(int argc, char *argv[]) {
	int nums[N] ;
	int i;
	
	produceRandomNums(nums,N,1000,9999);
	
	primeNums(nums,N);
	
	ascendSort(nums,N);
	for(i = 1;i < N;i++)
	{
		printf("第%d个：%d\n",i,nums[i]);
	}
	
	getch();
	return 0;
}

