#include <stdio.h>
#include <stdlib.h>
#include "冒泡排序头文件1.h"
#define N 200 
#define M 10
/*随机产生N个四位正整数,先按他们后三位升序排列，
如果后三位相等，则按原先的数值大小降序排列
最后把排序后的后十个数存入数组B中*/
void getLastTenNums(int nums[],int length1,int nums2[],int length2);
//将Nums1的后length2位存入nums2 
void getLastTenNums(int nums[],int length1,int nums2[],int length2)
{
	int i,j;
	//1:length1=30 2:length2=10
	//20~29
	for(i = 0,j = length1 - length2;i < length2 && j < length1;i++,j++)
	{
		nums2[i] = nums[j];
	}
	return ; 
}

int main(int argc, char *argv[]) {
	int nums[N],nums2[M];
	
	produceRandomNums(nums,N,1000,9999);
	outputNums(nums,N);
	printf("\n******************************************\n");
	bubbleSort(nums,N);
	outputNums(nums,N);
	printf("\n******************************************\n");
	getLastTenNums(nums,N,nums2,M);
	outputNums(nums2,M); 
	return 0;
}
