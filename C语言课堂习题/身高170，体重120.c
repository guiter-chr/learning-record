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
//后面不会了，我还是用以前的那个。 
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
		printf("身高%d\n",height[N]);
		if(height[N] > max)
		{
			max = height[N];
		}
	}
	for(j = 0;j <= N;j++)
	{
		weight[N] = rand() % 150 + 50;
		printf("体重%d\n",weight[N]);
		if(weight[N] < min)
		{
			min = weight[N];
		}
		if(height[N] == 170 &&  weight[N] == 120)
		{
			cnt++; 
			 
		}
	}
	
	 printf("身高为170的有%d人\n",cnt);
	 printf("体重为120的有%d人\n",cnt);
	 printf("最高身高为%dcm",max);
	 printf("最低体重为%d斤",min);
	getch();
	return 0;
}
