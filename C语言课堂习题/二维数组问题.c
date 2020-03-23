#include <stdio.h>
#include <stdlib.h>
#define M 3
#define N 4
/*  dbDimensArray */

int main(int argc, char *argv[]) {
	int arr1[M] = {3};
	int arr2[M][N] = {{1},{2,3,4},{5,6}};
	int i,j;
	
	for(i = 0;i < M;i++)
	{
		for(j = 0;j < N;j++)
		{
			printf("%d\t",arr2[i][j]);
		}
		printf("\n");
	}
	
	getch();
	return 0;
}
