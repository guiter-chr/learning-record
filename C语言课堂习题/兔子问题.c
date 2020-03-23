#include <stdio.h>
#include <stdlib.h>
#define N 24
/*Fibonacci
  2~length-1
*/
void fibonacci(int nums[],int length);
void printNums(int nums[],int length); 
//斐波那契数列 
void fibonacci(int nums[],int length)
{
	int i;
	
	nums[0] = 0;
	nums[1] = 1;
	nums[2] = 1;
	
	for(i = 3;i < length;i++)
	{
		nums[i] = nums[i-1] + nums[i-2] + nums[i-3];
	}
	
	return; 
}
//输出LENGTH个数据 

//自行搜索如何自定义头文件，并将你认为常见的用的多的自定义函数
//写入自定义头文件,在自己的工程中引入该头文件并调用该文件中定义的函数 
//C 自定义头文件 DevC++ 
void printNums(int nums[],int length)
{
	int i;
	
	for(i = 0;i < length;i++)
	{
		printf("%d\t",nums[i]);
	}
	return;	
}

int main(int argc, char *argv[]) {
	int rabbit[N],i;
	
	fibonacci(rabbit,N);
	printNums(rabbit,N);
	
	getch();
	return 0;
}

