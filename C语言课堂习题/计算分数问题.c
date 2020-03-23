#include <stdio.h>
#include <stdlib.h>
#define M 2
#define N 5

/* dbDimensArray
	数组直接赋初值时，数据量不要超限
				      数组元素默认值为0 
*/

int main(int argc, char *argv[]) {
	float  score[M][N],sum;
	int i,j;
	//输入成绩 
	for(i = 0;i < M;i++)
	{
		for(j = 0;j < N-1;j++)
		{
			printf("请输入第%d个学生的第%d门成绩:",i+1,j+1);
			scanf("%f",&score[i][j]);		
		}
	} 
	//计算平均分 = 总分(sum) / 科目数(N-1) 
	for(i = 0;i < M;i++)
	{
		sum = 0;
		
		for(j = 0;j < N-1;j++)
		{
			sum += score[i][j];
		}
		score[i][N-1] = sum / (N-1);
	}
	
	printf("\n*************************\n");
	printf("     数学\t英语\t语文\tC语言\t平均分\n"); 
	for(i = 0;i < M;i++)
	{
		switch(i)
		{
			case 0: printf("张三:");break;
			case 1: printf("李四:");break;
		}
		
		for(j = 0;j < N;j++)
		{
			printf("%.1f\t",score[i][j]);
		}
		printf("\n");
	}
	
	getch();
	return 0;
}
