#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char* argv[]) {
	int i;//循环变量  i , j , k , m , n  
	//循环次数  N次  1~N   0~N-1   N~1  N-1~0 
	
	for(i = 1;i <= 10;i = i + 2);
	{
		printf("跑%d圈\n",i);
	}
	return 0;
	
}
