#include <stdio.h>
#include <stdlib.h>
#define N 500
#define M 500
#include <math.h>
/*
	�������N��ѧ������ߡ�������Ϣ
	1.�ҳ������ߵ��Ƕ��٣�
	2.�ҳ�����������Ƕ��٣�
	3.�ҳ���ߵ���170���ص���120���ж����ˣ�
	
	1.����������飬������������
	2. �������ֵ��max��ֵ-9999999����������Сֵ��min��ֵ999999����
		����������cnt��ֵΪ0�� 
	3.	����������  N  ѭ�� 
	4. �����������   N  ѭ��
	5. ��ÿһ�������Ϣ��max���Ƚ�   N  ѭ�� 
			����߸���max�������maxΪ�����ֵ
			��������max�������κ�����
	6. ��ÿһ��������Ϣ��min���Ƚ�   N   ѭ�� 
			�����С��min�������minΪ��С��ֵ
			����С��min�������κ�����
	7. �����������ͬʱ��ָ��ֵ���Ƚ�  N  ѭ�� 
			����ͬ��������cnt++
			����ͬ�������κ��� 
	8.������ֽ��
	
	main:
		1.�����������
		2.���ø��ֺ�����ɹ���
		3.������
				 
	1.�������N���ض���Χ����	
	2.�����ֵgetMaxNum
	3.����СֵgetMinNum
	4.�����������ض�������������getSpecialCnts	
	5.���length����printNums
	 
 *///    1000  100,200
//1.�����������ض���Χ����  1000       100        200   
//        produceRandomNums(height,N,140,200);

//��������������Զ��庯����ɣ���ͨ���ú����޷���ֵ
//��������޷���ֵ����ú���ֱ�ӵ��ü���
//��������з���ֵ����ͨ���ڵ����ߴ����趨��һ��ͬ�������ݽ��շ���ֵ 
void produceRandomNums(int nums[],int length,int startNum,int endNum);
int getMax(int nums[],int length);
int getMin(int nums[],int length);
void printNums(int nums[],int length);
int getSpecialCnts(int nums1[],int length1,int nums2[],int length2,int condtn1,int condtn2);

/****���ܣ������������ض�����������********************************/
/****nums1:��һ������ length1:��һ�����鳤�� condtn1:��һ������****/ 
/****nums2:�ڶ������� length2:�ڶ������鳤�� condtn2:�ڶ�������****/ 
/****����ֵ����������������****************************************/
/****���ߣ�Hyper***************************************************/
/****����ʱ�䣺2019-11-19 AM 10:01*********************************/
/****���һ���޶�ʱ��:2019-11-20 PM 15:13**�޶���:Tom**************/ 
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
//ֵ����
//��ַ���� 
//��ȡ...��ֵ��getXXX   ����...��ֵ��setXXX
//�ж�ĳ�������ǲ���ʲô����:isXXX   ����ת����toXXX 
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
	//���������N�����  140-200 
//	for(i = 0;i < N;i++)
//	{
//		height[i] = rand() % 61 + 140; 
//	}
	//���������N������ 70-200
//	for(i = 0;i < N;i++)
//	{
//		weight[i] = rand() % 131 + 70;	
//	} 
	//���������N���������ֵ 
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
	//�����������ض��������� 
	for(i = 0;i < N;i++)
	{
		if(weight[i] == 120 && height[i] == 170)
		{
			cnt++;
		}
	}
	//������������ �ϵ㣬����ִ�� 
	for(i = 0;i < N;i++)
	{
		printf("H:%d\tW:%d\t",height[i],weight[i]);
	} 
	printf("\n-----------------------------------------------\n");
	printf("\n--------------������:%d----------------------\n",max);
	printf("\n--------------������:%d----------------------\n",min);
	printf("\n--------------������������:%d----------------------\n",cnt);
	return 0;
}
*/
