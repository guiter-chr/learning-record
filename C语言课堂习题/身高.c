#include <stdio.h>
#include <stdlib.h>
#define  N  51  //�궨�峣�� 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*�ҳ����19-1���ж����˵���ߵ���175
 	������
 	1.�������������ֵΪ0
	2.����������洢51�����  
 	3.¼�������˵���� 	 (ѭ�����Ƚ�51��)
	4.��ÿ���˵������175���Ƚ�	 (ѭ�����Ƚ�51��)
		�����ȣ�������+1
	5.��������������� 
	int height[51]
	
	�������� height
	���鳤�ȣ��������ܴ��������������51��������Ԫ�صĸ���
	�����±꣺0~50��0~n-1��һ�������ţ���0��꣩ 
	����Ԫ�أ�height[0]~height[50]
	�������ͣ� int
*/ 
int main(int argc, char *argv[]) {
	int  cnt = 0;
	int height[N],i;
	//3.¼�������˵���� 	 (ѭ�����Ƚ�51��)
	for(i = 0;i < N;i++)
	{
		printf("Please input height:");
		scanf("%d",&height[i]);
	}
	//4.��ÿ���˵������175���Ƚ�	 (ѭ�����Ƚ�51��)
	//		�����ȣ�������+1
	for(i = 0;i < N;i++)
	{
		if(height[i] == 175)
		{
			cnt++;
		}
	}
	
	printf("���19-1���Ϊ175�������У�%d��",cnt);
	getch();
	
	return 0;
}
