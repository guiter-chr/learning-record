#include <stdio.h>
#include <stdlib.h>

/*  ����ˮ�ɻ�
	�ҷ�Χ
	�ҹ�ϵ
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
	printf("�ܹ���%d������ˮ�ɻ���",cnt);
	getch();
	return 0;
}
