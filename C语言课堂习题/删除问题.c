#include <stdio.h>
#include <stdlib.h>
#define N 6
#include ""
/*  deleteArray
	0.判断数组是否已空 
	1.元素的移动，从前往后依次往前移动一个位置 
	删除第 Loc个元素，Loc~Length-1 
	删除成功设定为1，删除失败设定为0 
*/
int deleteArrayByLoc (int nums[],int length,int loc);
int deleteArrayByLoc (int nums[],int length,int loc)
{
	int i; 
	//0.判断数组是否已空 ,或删除的位置不确定。
	if(length == 0 || loc > length || loc <= 0)
	{
		return 0;
	}
	
	//1.元素的移动，从前往后依次往前移动一个位置loc~length-1 
	for(i = loc;i < length;i++)
	{
		nums[i-1] = nums[i];
	}
	//最后一个元素赋值为一个特殊值 
	nums[length-1] = -999999;
	
	return 1;
}
int main(int argc, char *argv[]) {
	int height[N],flag;
	
	inputNums(height,N);
	flag = deleteArrayByLoc(height,N,3)
	
	if(flag == 1)
	{
		outputNums(height,N-1);
	}else{
		printf("\n输出错误\n")
	}
	
	getch();
	return 0;
}
//作业：删除指定值的元素 


