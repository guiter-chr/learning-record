#include <stdio.h>
#include <stdlib.h>
/* 	getMax.dev
	求两个数的最大值。 
	假定19-1级管理系统共有如下几个功能：
		成员管理(2000)、文件管理(1500)、相册管理(3000)、出勤管理(2000) 
		menberMang()  、filemang()、imageMang()、attendMang() 
		代码重用率 
		
	调用者：
	被调用者：	
	参数：调用者给被调用者的数据 
	返回值： 被调用者做完事之后给回调用者的数据
	
	分析在问题的描述中，到底有不有参数？如果有参数，又有几个参数？ 
	每一个参数的数据类型分别又是什么？ 
	分析在问题描述中，被调用者做完事之后，到底有不有返回值？
	如果有返回值，看到底是什么类型？ 
	
	形式参数：形参，函数定义时的参数 
	实际参数 ：实参，函数调用时的参数 
	通常形参实参同名 
	
	
	一致性体现：参数个数、类型；返回值类型 
	函数声明与函数定义要一致 
	返回值必须与返回类型一致 
	形参与实参必须一致 
	
	建议形参、实参名称定义成相同的
	建议返回值和接收返回值的变量，名称定义成相同的
		以便理解调用者与被调用者数据之间的关联关系 
*/

//函数声明，先声明后定义
int getMax(int num1,int num2);
//函数定义，函数到底怎么去实现功能
int getMax(int num1,int num2)
{ 
//	int max;	
//	
//	if(num1 > num2)
//	{
//		max = num1;
//	}else{
//		max = num2;
//	}
	
//	return max;
	
//	if(num1 > num2)
//	{
//		return num1;
//	}else{
//		return num2;
//	}
		return num1 > num2 ? num1 : num2;
}

int main(int argc,char * argv[]){
	int num1,num2,max;
	
	printf("Input num1:");
	scanf("%d",&num1);
	printf("Input num2:");
	scanf("%d",&num2);
	
	max = getMax(num1,num2);
	
	printf("Maxxxx = %d",max);
	getch();
	return 0;
}










