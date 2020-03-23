#include <stdio.h>
#include <stdlib.h>
#define  N  51  //宏定义常量 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*找出软件19-1班有多少人的身高等于175
 	分析：
 	1.定义计数器，初值为0
	2.定义变量，存储51个身高  
 	3.录入所有人的身高 	 (循环，比较51次)
	4.将每个人的身高与175作比较	 (循环，比较51次)
		如果相等，计数器+1
	5.输出人数，计数器 
	int height[51]
	
	数组名： height
	数组长度：数组所能处理的数据量，如51，数组中元素的个数
	数组下标：0~50，0~n-1，一种索引号（从0起标） 
	数组元素：height[0]~height[50]
	数组类型： int
*/ 
int main(int argc, char *argv[]) {
	int  cnt = 0;
	int height[N],i;
	//3.录入所有人的身高 	 (循环，比较51次)
	for(i = 0;i < N;i++)
	{
		printf("Please input height:");
		scanf("%d",&height[i]);
	}
	//4.将每个人的身高与175作比较	 (循环，比较51次)
	//		如果相等，计数器+1
	for(i = 0;i < N;i++)
	{
		if(height[i] == 175)
		{
			cnt++;
		}
	}
	
	printf("软件19-1身高为175的人数有：%d人",cnt);
	getch();
	
	return 0;
}
