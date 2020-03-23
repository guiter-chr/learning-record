#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int N,i;
	int height[N],weight[N];
	int max,min,cnt;
	
	printf("请输入N的值"); 
	scanf("%d",&N);
	
	srand((unsigned)time(NULL));
	
	for(i = 0;i <= N;i++){
		
		height[i] = rand() %61 + 140;
		weight[i] = rand() %55 + 45;
		
		printf("第%d位：身高=%dcm	体重=%dkg\n",i,height[i],weight[i]);
	}
	max = getMax(height,N);
	min = getMin(weight,N);
	cnt = getCnt(height,weight,170,60);
	
	printf("\n-------------------------------------\n");
	printf("\n----------身高最大值为%dcm----------\n",max);
	printf("\n----------体重最小值为%dkg-----------\n",min);
	printf("\n----------身高为170cm且体重为60kg的人数：%d人",cnt);
	
	getch();
	return 0;
}
int getMax(int height[],int N);
int getMax(int height[],int N){
	int i;
	int max = -99999;
	
	for(i = 0;i <= N;i++){
		
		if(max < height[i]){
			
			max = height[i];
		}
	}
	return max;
}
int getMin(int weight[],int N);
int getMin(int weight[],int N){
	int i;
	int min = 99999;
	
	for(i = 0;i <= N;i++){
		
		if(min > weight[i]){
			
			min = weight[i];
		}
	}
	return min;
}
int getCnt(int height[],int weight[],int N1,int N2);
int getCnt(int height[],int weight[],int N1,int N2){
	int i,N;
	int cnt = 0;
	for(i = 0;i <= N;i++){

		if(height[i] == 170 && weight[i] == 60){
		
			cnt++;
		}
	}
	return cnt;
}

	
	
	
	
	
	
	
	
	
	
	
