#include <stdio.h>
#include <stdlib.h>
#include "MyHead.h" 
#define N 201
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void finalThrAscend(int nums[],int length);//�����������ݺ���λ��С���У� 
void finalThrAscend(int nums[],int length)
{
	int i,j,temp;
	
	for(i = 1;i <= length - 1;i++)
	{
		for(j = 1;j <= length - i;j++)
		{
			if(nums[j-1] %1000 > nums[j] %1000 || nums[j-1] %1000 == nums[j] %1000 && nums[j-1] < nums[j])
			{
				temp = nums[j-1];
				nums[j-1] = nums[j];
				nums[j] = temp;
			}
		}
	}
}

void finalOutput(int nums[],int starNum,int endNum);//������10������������������b[] 
void finalOutput(int nums[],int starNum,int endNum)
{
	int i,b[N];
	for(i = starNum;i <= endNum;i++)
	{
		b[i] = nums[i];
		printf("b[%d]:%d\n",i,nums[i]);
	}
}

int main(int argc, char *argv[]) {
	int nums[N];
	int i;
	
	produceRandomNums(nums,N,1000,9999);
	
	finalThrAscend(nums,N);
	for(i = 1;i < N;i++)
	{
		printf("��%d������%d\n",i,nums[i]);
	}
	printf("\n------------------------------\n");
	finalOutput(nums,191,200);
	
	getch(); 
	return 0;
}

//д��ʱ��Ϊ��2019��11��23��
//д���ߣ�����
 

