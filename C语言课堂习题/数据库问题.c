#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*结构体  typedef:别名定义
	SQL Server MySQL DB2  Oracle...
	.  :访问普遍变量的属性
	-> : 访问指针变量的属性  */
typedef struct book{
	char bookName[20];
	char author[15];
	char publisher[20];
	float price;
	
} Book;



int main(int argc, char *argv[]) {
	Book book1,*book2 = NULL;
	//struct book book2;
	int x;
	//sizeof:求出某个数据所需要的空间大小
	//动态内存分配 
	book2 = (Book *)malloc(sizeof(Book)); 
	
	puts("请输入书名:"); 
	gets(book2->bookName);
	puts("请输入作者:");
	gets(book2->author);
	puts("请输入出版社:");
	gets(book2->publisher);
	puts("请输入价格:");
	scanf("%f",&book2->price); 
	
	printf("\n******************************\n");
	puts(book2->bookName);
	puts(book2->author);
	puts(book2->publisher);
	printf("%.1f",book2->price);
	 
	 //释放空间
	  free(book2); 
	getch();
	return 0;
}
