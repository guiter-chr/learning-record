#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, c;
	printf("������a = ");
	scanf("%f",&a); 
	printf("������b = ");
	scanf("%f",&b); 
	printf("������c = ");
	scanf("%f",&c); 
	if(a > 0 && b > 0 && c > 0 && a + b > c && b + c > a && a + c > b)
		if(a == b && b == c)
		{
			printf("�ȱ������Σ�\n"); 
		}else if(a==b || a==c || b==c)
			  {
				printf("���������Σ�\n");
			  }else 	if(pow(a,2) + pow(b,2) == pow(c,2) || pow(a,2) + pow(c,2) == pow(b,2) || pow(b,2) + pow(c,2) == pow(a,2))
			  			{
			  				printf("ֱ�������Σ�\n");
						}else
						{
							printf("��ͨ�����Σ�\n");
						}else
						{
							printf("���ܹ��������Σ�\n"); 
						}
				
	return 0;
}
