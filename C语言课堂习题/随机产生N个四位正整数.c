#include <stdio.h>
#include <stdlib.h>
#include "ð������ͷ�ļ�1.h"
#define N 200 
#define M 10
/*�������N����λ������,�Ȱ����Ǻ���λ�������У�
�������λ��ȣ���ԭ�ȵ���ֵ��С��������
���������ĺ�ʮ������������B��*/
void getLastTenNums(int nums[],int length1,int nums2[],int length2);
//��Nums1�ĺ�length2λ����nums2 
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
