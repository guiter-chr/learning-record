#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		int num;//reverse
//	int unitDigit,tenDigit,hundDigit,thousDigit; 
	
	num = 234;
//	while(1)
//	{
	
//	printf("������һ��1-10����:"); 
//		scanf("%d" , &num);//&:��ַ��   &   [100,999]
//      ��ǰ��ֹѭ�� = ����ѭ��                                   fflush
//		if(num >= 1 && num <= 10)
//  		{
//			break;	
//		}else{
//		printf("����������������롣"); 
//		}
//	}
//	while(num < 1 || num > 10)
//	{
//		printf("������һ��1-10����:");
//		scanf("%d",&num); 
//	}
//	printf("num = %d",num);
//	return 0;
//  }
	do{
		printf("������һ��1-10��:");
		scanf("%d",&num);
	}while(!(num >= 1 && num <= 10));
	
	printf("num = %d",num);
	return 0;
}
	
	
	
