#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int price = 0;
	
	printf("��������Ʒ�ļ۸���������:");
	scanf("%d",&price);
	
	if(price < 50)
	{
		printf("�ã�����"); 
	}else{
		printf("̫���ˣ�����"); 
	} 
	
	getch(); 
	return 0;
}
