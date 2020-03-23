#include <stdio.h>
#include <stdlib.h>
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//int main(int argc, char *argv[]) {
	void main(void)
	{
		int i_year=0;															/*年*/ 
		int i_month=0;															/*月*/ 
		int i_day=0;															/*日*/ 
		
		printf("\nPlease input your ID:");
		scanf("%*6d%4d%2d%2d",&i_year,&i_month,&i_day);							/*输入身份证号*/ 
		printf("\nYour birthday is:%4d-%02d-%02d",i_year,i_month,i_day);		/*输出生日*/ 
	}	
	
	
	
	
//	return 0;
//}
