#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//int main(int argc, char *argv[]) { 
	//�汾һ�������ַ�������ͼ��
#include <stdio.h>
 
int main(void)
{
	float a,x,y;
	for(y=1.5f; y>-1.5f; y-=0.1f)
	{
		for(x=-1.5f; x<1.5f; x+=0.05f)
		{
			a = x*x+y*y-1;
			//�����@���ż�Ϊ��ӡ��������ͼ�����ţ��ɸ���
			char ch = a*a*a-x*x*y*y*y<=0.0f?'*':' '; 
			putchar(ch);  
			//����putchar(a*a*a-x*x*y*y*y<=0.0f?'*':' ');
		}
		printf("\n");
	}
	system("color 04"); 
	return 0;
} 
 
