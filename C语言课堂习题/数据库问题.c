#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*�ṹ��  typedef:��������
	SQL Server MySQL DB2  Oracle...
	.  :�����ձ����������
	-> : ����ָ�����������  */
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
	//sizeof:���ĳ����������Ҫ�Ŀռ��С
	//��̬�ڴ���� 
	book2 = (Book *)malloc(sizeof(Book)); 
	
	puts("����������:"); 
	gets(book2->bookName);
	puts("����������:");
	gets(book2->author);
	puts("�����������:");
	gets(book2->publisher);
	puts("������۸�:");
	scanf("%f",&book2->price); 
	
	printf("\n******************************\n");
	puts(book2->bookName);
	puts(book2->author);
	puts(book2->publisher);
	printf("%.1f",book2->price);
	 
	 //�ͷſռ�
	  free(book2); 
	getch();
	return 0;
}
