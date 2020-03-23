#include <stdio.h>
#include <stdlib.h>
#include "冒泡排序头文件1.h"
#define N 10 
/* 
	1.找位置：查找插入位置
		比较（从后往前） 
	2.将数据依次往后移动
		从后往前依次移动一个位置
	3.插入 
*/
void inertArray(int nums[],int maxLength,int length,int insertNum);
//原数组升序 排列，插入一个数据inertNum保证原数据nums依然升序 
void inertArray(int nums[],int maxLength,int length,int insertNum)
{
	int i,loc;
	//先判断数组是否已满
	if(maxLength == length)
	{
		return;
	}
	//找位置  maxLength:10  length:5
	for(i = length - 1;i >= 0;i--)
	{
		if(insertNum > nums[i])
		{
			loc = i + 1;
			break;
		}
		if(i == -1)
		{
			loc = 0;
		} 
	} 
	//移动
	for(i = length - 1;i >= loc;i--)
	{
		nums[i+1] = nums[i];	
	} 
	//插入
	nums[loc] = insertNum;
	
	return; 
}
	  



int main(int argc, char *argv[]) {
	
	int height[N];
	
	inputNums(height,5);
	inertArray(height,N,5,12);
	outputNums(height,6);
	
	getch();
	return 0;
}
