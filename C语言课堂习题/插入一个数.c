#include <stdio.h>
#include <stdlib.h>
#include "ð������ͷ�ļ�1.h"
#define N 10 
/* 
	1.��λ�ã����Ҳ���λ��
		�Ƚϣ��Ӻ���ǰ�� 
	2.���������������ƶ�
		�Ӻ���ǰ�����ƶ�һ��λ��
	3.���� 
*/
void inertArray(int nums[],int maxLength,int length,int insertNum);
//ԭ�������� ���У�����һ������inertNum��֤ԭ����nums��Ȼ���� 
void inertArray(int nums[],int maxLength,int length,int insertNum)
{
	int i,loc;
	//���ж������Ƿ�����
	if(maxLength == length)
	{
		return;
	}
	//��λ��  maxLength:10  length:5
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
	//�ƶ�
	for(i = length - 1;i >= loc;i--)
	{
		nums[i+1] = nums[i];	
	} 
	//����
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
