#include <stdio.h>
#include <stdlib.h>
#define N 6
#include ""
/*  deleteArray
	0.�ж������Ƿ��ѿ� 
	1.Ԫ�ص��ƶ�����ǰ����������ǰ�ƶ�һ��λ�� 
	ɾ���� Loc��Ԫ�أ�Loc~Length-1 
	ɾ���ɹ��趨Ϊ1��ɾ��ʧ���趨Ϊ0 
*/
int deleteArrayByLoc (int nums[],int length,int loc);
int deleteArrayByLoc (int nums[],int length,int loc)
{
	int i; 
	//0.�ж������Ƿ��ѿ� ,��ɾ����λ�ò�ȷ����
	if(length == 0 || loc > length || loc <= 0)
	{
		return 0;
	}
	
	//1.Ԫ�ص��ƶ�����ǰ����������ǰ�ƶ�һ��λ��loc~length-1 
	for(i = loc;i < length;i++)
	{
		nums[i-1] = nums[i];
	}
	//���һ��Ԫ�ظ�ֵΪһ������ֵ 
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
		printf("\n�������\n")
	}
	
	getch();
	return 0;
}
//��ҵ��ɾ��ָ��ֵ��Ԫ�� 


