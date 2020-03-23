#include <stdio.h>
#include <stdlib.h>

/*  三阶水仙花
	找范围
	找关系
*/

int main(int argc, char *argv[]) {
	int num,units,tens,hunds;
	int cnt = 0; 
	for(num = 100;num < 1000;num++)
	{
		units = num % 10;
		tens = num / 10 % 10;
		hunds = num / 100;
		
		if(num == pow(units,3) + pow(tens,3) + pow(hunds,3))
		{
			printf("%d\t",num);
			cnt++;
		}
	}
	printf("总共有%d个三阶水仙花数",cnt);
	getch();
	return 0;
}
