#include <stdio.h>
#include <stdlib.h>
#define N 60
#include <time.h>
/* 
main:自定义函数 
1.定义数据
2.调用函数
3.输出结果 
 
1.随机产生N个特定范围的数produceRandomNums
const (指针)int * produceRandomNums(int nums[N],int remdNum,int addNum)
	{
	..... 
		return nums;
	} 
2.求最大值getMaxNum
3.求最小值getMinNum
4.求满足两个特定的数据量getSpecialCnts 
5.输出N个数 printNum
 */

void produceRandomNums(int num[],int remNum,int addNum,int a);

void produceRandomNums(int num[],int remNum,int addNum,int a)
{
	int i;
	
	srand((unsigned)time(NULL));
	
	for(i = 0;i < a;i++)
	{
		num[i] = rand()% remNum + addNum;
	}
}

int getMax(int num[],int a,int max);

int getMax(int num[],int a,int max)
{	
	int i; 
	
	srand((unsigned)time(NULL));
	for(i = 0;i < a;i++)
	{
		if(num[i] > max)
		{
			max = num[i];
		}
	}
	return max;
}

int getMin(int num[],int a,int min);

int getMin(int num[],int a,int min)
{
	int i;
	
	srand((unsigned)time(NULL));
		for(i = 0;i < a;i++)
	{
		if(num[i] < min)
		{
			min = num[i];
		}
	}
	return min;
}

int getSpecialCnts(int num1[],int num2[],int a,int SpecialCnts1,int SpecialCnts2);

int getSpecialCnts(int num1[],int num2[],int a,int SpecialCnts1,int SpecialCnts2)
{
	int cnt = 0;
	int i;
	
	srand((unsigned)time(NULL));
	for(i = 0;i < a;i++)
	{
		if(num1[i] == SpecialCnts1 && num2[i] == SpecialCnts2)
		{
			cnt++;
		}
	}
	return cnt;
}


int main(int argc, char *argv[]) {
	int max = -999999,min = 999999,f[N],h[N],i; 
	int cnt = 0;

	produceRandomNums(f,N,51,150);
	produceRandomNums(h,N,161,80);
	
	for(i = 0;i < N;i++)
	{
		printf("身高=%d\t体重=%d\t",f[N],h[N]);
	}
	
	max = getMax(f,N,max);
	min = getMin(h,N,min);
	cnt = getSpecialCnts(f,h,N,170,120);
	
	printf("----------max=%d\n-------------",max);
	printf("----------min=%d\n------------",min);
	printf("----------身高170且体重120有%d个---------",cnt);
	 
	return 0;
}

