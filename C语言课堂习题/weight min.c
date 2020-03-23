#include <stdio.h>
#include <stdlib.h>
#define N 500
#define M 500
#include <math.h>
/*
	随机产生N个学生的身高、体重信息
	1.找出身高最高的是多少？
	2.找出体重最轻的是多少？
	3.找出身高等于170体重等于120的有多少人？
	
	1.定义身高数组，定义体重数组
	2. 定义最大值（max初值-9999999），定义最小值（min初值999999），
		定义人数（cnt初值为0） 
	3.	产生随机身高  N  循环 
	4. 产生随机体重   N  循环
	5. 将每一个身高信息与max作比较   N  循环 
			若身高高于max，则更新max为更大的值
			若不高于max，不做任何事情
	6. 将每一个体重信息与min作比较   N   循环 
			若身高小于min，则更新min为更小的值
			若不小于min，不做任何事情
	7. 将身高与体重同时与指定值作比较  N  循环 
			若相同，计数器cnt++
			若不同，不做任何是 
	8.输出各种结果
	
	main:
		1.定义各种数据
		2.调用各种函数完成功能
		3.输出结果
				 
	1.随机产生N个特定范围的数	
	2.求最大值getMaxNum
	3.求最小值getMinNum
	4.求满足两个特定条件的数据量getSpecialCnts	
	5.输出length个数printNums
	 
 *///    1000  100,200
//1.随机产生多个特定范围的数  1000       100        200   
//        produceRandomNums(height,N,140,200);

//如果输出结果是在自定义函数完成，则通常该函数无返回值
//如果函数无返回值，则该函数直接调用即可
//如果函数有返回值，则通常在调用者处，需定义一个同类型数据接收返回值 
void produceRandomNums(int nums[],int length,int startNum,int endNum);
int getMax(int nums[],int length);
int getMin(int nums[],int length);
void printNums(int nums[],int length);
int getSpecialCnts(int nums1[],int length1,int nums2[],int length2,int condtn1,int condtn2);

/****功能：求满足两个特定条件的数量********************************/
/****nums1:第一个数组 length1:第一个数组长度 condtn1:第一个条件****/ 
/****nums2:第二个数组 length2:第二个数组长度 condtn2:第二个条件****/ 
/****返回值：满足条件的数量****************************************/
/****作者：Hyper***************************************************/
/****创建时间：2019-11-19 AM 10:01*********************************/
/****最后一次修订时间:2019-11-20 PM 15:13**修订人:Tom**************/ 
int getSpecialCnts(int nums1[],int length1,int nums2[],int length2,int condtn1,int condtn2)
{
	int cnt = 0,i,j;
	
	for(i = 0,j = 0;i < length1 && j < length2;i++,j++)
	{
		if(nums1[i] == condtn1 && nums2[j] == condtn2)
		{
			cnt++;
		}	
	}	
	
	return cnt;
}

void printNums(int nums[],int length)
{
	int i;
	
	for(i = 0;i < length;i++)
	{
		printf("%d\t",nums[i]);
	}
	
	return ;
}
 
int getMin(int nums[],int length)
{
	int i,min = 999999;
	
	for(i = 0;i < length;i++)
	{
		if(min > nums[i])
		{
			min = nums[i];
		}
	}
	
	return min;
}

int getMax(int nums[],int length)
{
	int i,max = -999999;
	
	for(i = 0;i < length;i++)
	{
		if(max < nums[i])
		{
			max = nums[i];
		}
	}
	
	return max;
}

void produceRandomNums(int nums[],int length,int startNum,int endNum) 
{
	int i;
	
	srand((unsigned)time(NULL));
	for(i = 0;i < length;i++)
	{
		nums[i] = rand() % (endNum - startNum + 1) + startNum;
	}
	return;
}
//值传递
//地址传递 
//获取...的值：getXXX   设置...的值：setXXX
//判断某个数据是不是什么东西:isXXX   数据转换：toXXX 
//isFemail 
int main(int argc, char *argv[]) {
	int height[N],weight[M],i;
	int maxHeight,maxWeight,minWeight,minHeight;
	int cnt;
	
	produceRandomNums(height,N,140,200);
	produceRandomNums(weight,M,70,200);
	
	maxHeight = getMax(height,N);
	maxWeight = getMax(weight,M);
	
	minHeight = getMin(height,N);
	minWeight = getMin(weight,M);
	
	cnt = getSpecialCnts(height,N,weight,M,170,140);
	
	printNums(height,N);
	printf("\n-------------------\n");
	printNums(weight,M);
	printf("\n-------------------\n");
	printf("MaxHeight:%d\n",maxHeight);
	printf("MaxWeight:%d\n",maxWeight);
	printf("\n-------------------\n");
 	printf("MinHeight:%d\n",minHeight);
	printf("MinWeight:%d\n",minWeight);
	printf("\n-------------------\n");
	printf("Count:%d\n",cnt);
	
	getch();
	return 0;	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	//int max = -9999999,min = 9999999,cnt = 0;
	
	//srand((unsigned)time(NULL));
	//随机产生多N个身高  140-200 
//	for(i = 0;i < N;i++)
//	{
//		height[i] = rand() % 61 + 140; 
//	}
	//随机产生多N个体重 70-200
//	for(i = 0;i < N;i++)
//	{
//		weight[i] = rand() % 131 + 70;	
//	} 
	//随机产生多N个数求最大值 
/*	for(i = 0;i < N;i++)
	{
		if(height[i] > max)
		{
			max = height[i];
		}
	}
	
	for(i = 0;i < N;i++)
	{
		if(weight[i] < min)
		{
			min = weight[i];
		}
	}
	//求满足两个特定的数据量 
	for(i = 0;i < N;i++)
	{
		if(weight[i] == 120 && height[i] == 170)
		{
			cnt++;
		}
	}
	//输出身高体体重 断点，步进执行 
	for(i = 0;i < N;i++)
	{
		printf("H:%d\tW:%d\t",height[i],weight[i]);
	} 
	printf("\n-----------------------------------------------\n");
	printf("\n--------------最高身高:%d----------------------\n",max);
	printf("\n--------------最低身高:%d----------------------\n",min);
	printf("\n--------------满足条件人数:%d----------------------\n",cnt);
	return 0;
}
*/
