#include <stdio.h>
#include <stdlib.h>
#define N 10

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//int getnum(int num1, int nm2);

//int getnumx(int num1,int num2)
//{ 
//	int max;
//	int min;	
	
//	if(num1 > num2)
//	{
//		max = num1;
//	}else{
//		max = num2;
//	}
	
//	return max; 
	
//	if(num1 < num2)
//	{
//		min = num1;
//	}else{
//		min = num2;
//	} 

//	return min;
//}
//���治���ˣ��һ�������ǰ���Ǹ��� 
int main(int argc, char *argv[]) {
	int height[N];
	int weight[N];
	int cnt = 0;
	int max = 0;
	int min = 200;
	int i;
	int j;
	
	srand((unsigned)time(NULL));
	for(i = 0;i <= N;i++) 
	{
		height[N] = rand() % 150 + 50;
		printf("���%d\n",height[N]);
		if(height[N] > max)
		{
			max = height[N];
		}
	}
	for(j = 0;j <= N;j++)
	{
		weight[N] = rand() % 150 + 50;
		printf("����%d\n",weight[N]);
		if(weight[N] < min)
		{
			min = weight[N];
		}
		if(height[N] == 170 &&  weight[N] == 120)
		{
			cnt++; 
			 
		}
	}
	
	 printf("���Ϊ170����%d��\n",cnt);
	 printf("����Ϊ120����%d��\n",cnt);
	 printf("������Ϊ%dcm",max);
	 printf("�������Ϊ%d��",min);
	getch();
	return 0;
}
