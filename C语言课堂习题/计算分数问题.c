#include <stdio.h>
#include <stdlib.h>
#define M 2
#define N 5

/* dbDimensArray
	����ֱ�Ӹ���ֵʱ����������Ҫ����
				      ����Ԫ��Ĭ��ֵΪ0 
*/

int main(int argc, char *argv[]) {
	float  score[M][N],sum;
	int i,j;
	//����ɼ� 
	for(i = 0;i < M;i++)
	{
		for(j = 0;j < N-1;j++)
		{
			printf("�������%d��ѧ���ĵ�%d�ųɼ�:",i+1,j+1);
			scanf("%f",&score[i][j]);		
		}
	} 
	//����ƽ���� = �ܷ�(sum) / ��Ŀ��(N-1) 
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
	printf("     ��ѧ\tӢ��\t����\tC����\tƽ����\n"); 
	for(i = 0;i < M;i++)
	{
		switch(i)
		{
			case 0: printf("����:");break;
			case 1: printf("����:");break;
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
