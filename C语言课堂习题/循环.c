#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int price = 0;
	
	printf("请输入商品的价格（正整数）:");
	scanf("%d",&price);
	
	if(price < 50)
	{
		printf("好，买了"); 
	}else{
		printf("太贵了，算了"); 
	} 
	
	getch(); 
	return 0;
}
