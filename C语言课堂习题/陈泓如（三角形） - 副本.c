#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, c;
	printf("请输入a = ");
	scanf("%f",&a); 
	printf("请输入b = ");
	scanf("%f",&b); 
	printf("请输入c = ");
	scanf("%f",&c); 
	if(a > 0 && b > 0 && c > 0 && a + b > c && b + c > a && a + c > b)
		if(a == b && b == c)
		{
			printf("等边三角形！\n"); 
		}else if(a==b || a==c || b==c)
			  {
				printf("等腰三角形！\n");
			  }else 	if(pow(a,2) + pow(b,2) == pow(c,2) || pow(a,2) + pow(c,2) == pow(b,2) || pow(b,2) + pow(c,2) == pow(a,2))
			  			{
			  				printf("直角三角形！\n");
						}else
						{
							printf("普通三角形！\n");
						}else
						{
							printf("不能构成三角形！\n"); 
						}
				
	return 0;
}
