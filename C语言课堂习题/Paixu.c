#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 200 

void autonum(int array[ ],int length,int startnum,int endnum)
{
	int i;
	
	srand((unsigned)time(NULL));
	for(i = 0;i < length;i++)
	{
		array[i] = rand() % (endnum - startnum + 1) + startnum;
		printf("%6d",array[i]);
	}
	
	return;
}
void tonum(int array1[ ],int length,int num,int array2[])
{
	int i;
	int unitDigit,tenDigit,hundDigit;
	
	for(i = 0;i < length;i++)
	{
		num = array1[i];
		
		unitDigit = num % 10;
		tenDigit = num % 100 / 10;
		hundDigit = num / 100 % 10;
		
		num = hundDigit * 100 + tenDigit * 10 + unitDigit;
		array2[i] = num;
	}
	
	return;
} 
void UpSort(int nums[ ],int length,int array[])
{
	int i,j,temp;
	
	for(i = 1;i < length;i++)
	{
		for(j = 1;j <= length -i;j++)
		{
			if(nums[j-1] > nums[j])
			{
				temp = nums[j - 1];
				nums[j - 1] = nums[j];
				nums[j] = temp;
				array[i - 1] = temp;
			}
		}
	}
	return;
} 
void DownSort(int nums[ ],int length)
{
	int i,j,temp;
	
	for(i = 1;i < length;i++)
	{
		for(j = 1;j <= length - i;j++)
		{
			if(nums[j - 1] < nums[j])
			{
				temp = nums[j - 1];
				nums[j - 1] = nums[j];
				nums[j] = temp;
			}
		}
	}
	return;
}

int main()
{
	int i;
	int fourdigit[N],lastThrDig,lastarr[N],order[N];
	
	printf("昧字恢伏議膨了方忖:\n");
	autonum(fourdigit,N,1000,9999);
	printf("\n！！！！！！！！！！！！！！！！！！！！！！\n");
	
	printf("朔眉了方忖:\n");
	tonum(fourdigit,N,lastThrDig,lastarr);
	for(i = 0;i < N;i++)
	{
		printf("%03d\t",lastarr[i]);
	}
	printf("\n！！！！！！！！！！！！！！！！！！！！！！\n");
	
	UpSort(lastarr,N,fourdigit);
	for(i = 0;i < N;i++)
	{
		printf("%d\t",fourdigit[i]);
	}
	
	getch();
	return 0;
}


