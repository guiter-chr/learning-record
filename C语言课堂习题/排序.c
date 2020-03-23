
#include <stdio.h>
#include <stdlib.h>
#define N 5
/* 冒泡排序     N(个数) = 7*/
/*	比较和交换  7                       6                               7-i
			    N-1                     N-2                             N-i
			第一轮(6)					第二轮(5)                       第三轮(4)
	45		45							32		     					15
	65		32							15		     					32
	32		15							45		     					45
	15		56							56	 	     					56
	56		65							23		     					23
	78		23							65		     
	23		78	
*/
void bubbleSort(int nums[],int length);
//冒泡排序，length个数排序，比较length-1轮，第i轮比较length-i次 

void bubbleSort(int nums[],int length)

{
	int i,j,temp;
	for(i = 1;i <= length-1;i++)
	{
		for(j = 1;j <= length-i;j++)  //1  2
		{
			
			if(nums[j-1] < nums[j])
			{
			//数据交换
			temp = nums[j-1];//  1
			nums[j-1] = nums[j];//  2
			nums[j] = temp;//  1
			}
		}
	}
	return;
}
int main(int argc, char *argv[]) {
	int height[N],i;
	
	for(i = 0;i < N;i++)
	{
		printf("Input num:");
		scanf("%d",&height[i]);
	}
	
	bubbleSort(height,N);
	
	for(i = 0;i < N;i++)
	{
		printf("%d\t",height[i]);
	}
	
	getch();
	return 0;
}



