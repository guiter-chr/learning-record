#include <iostream>

/*·¶Î§£ºkid1,kid2,kid3,kid4:1~6
  ¹ØÏµ£ºkid2 == kid1+1 && kid3 == kid2+1 && kid4 == kid3+1  kid1*kid2*kid3*kid4 == 11880*/

int main(int argc, char** argv) {
	int kid1,kid2,kid3,kid4;
	
	for(kid1 = 1;kid1 <= 15;kid1++)
	{
		for(kid2 = 1;kid2 <= 15;kid2++)
		{
			for(kid3 = 1;kid3 <= 15;kid3++)
			{
				for(kid4 = 1;kid4 <= 15;kid4++)
				{
					if (kid2 == kid1+1 && kid3 == kid2+1 && kid4 == kid3+1)
					{
						printf("%d\t%d\t%d\t%d",kid1,kid2,kid3,kid4);
					}
				}
			}   
		}
	}
	 
	return 0;
}
