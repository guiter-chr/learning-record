#include <stdio.h>
#include <stdlib.h>
#define N 24
/*Fibonacci
  2~length-1
*/
void fibonacci(int nums[],int length);
void printNums(int nums[],int length); 
//쳲��������� 
void fibonacci(int nums[],int length)
{
	int i;
	
	nums[0] = 0;
	nums[1] = 1;
	nums[2] = 1;
	
	for(i = 3;i < length;i++)
	{
		nums[i] = nums[i-1] + nums[i-2] + nums[i-3];
	}
	
	return; 
}
//���LENGTH������ 

//������������Զ���ͷ�ļ�����������Ϊ�������õĶ���Զ��庯��
//д���Զ���ͷ�ļ�,���Լ��Ĺ����������ͷ�ļ������ø��ļ��ж���ĺ��� 
//C �Զ���ͷ�ļ� DevC++ 
void printNums(int nums[],int length)
{
	int i;
	
	for(i = 0;i < length;i++)
	{
		printf("%d\t",nums[i]);
	}
	return;	
}

int main(int argc, char *argv[]) {
	int rabbit[N],i;
	
	fibonacci(rabbit,N);
	printNums(rabbit,N);
	
	getch();
	return 0;
}

