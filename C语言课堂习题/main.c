#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		int num;//reverse
//	int unitDigit,tenDigit,hundDigit,thousDigit; 
	
	num = 234;
//	while(1)
//	{
	
//	printf("请输入一个1-10的数:"); 
//		scanf("%d" , &num);//&:地址符   &   [100,999]
//      提前终止循环 = 跳出循环                                   fflush
//		if(num >= 1 && num <= 10)
//  		{
//			break;	
//		}else{
//		printf("输入错误，请重新输入。"); 
//		}
//	}
//	while(num < 1 || num > 10)
//	{
//		printf("请输入一个1-10的数:");
//		scanf("%d",&num); 
//	}
//	printf("num = %d",num);
//	return 0;
//  }
	do{
		printf("请输入一个1-10数:");
		scanf("%d",&num);
	}while(!(num >= 1 && num <= 10));
	
	printf("num = %d",num);
	return 0;
}
	
	
	
