#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int A,B,C,D,E,F,a,b,c,d,e,f;
	
	a = 50;
	b = 20;
	c = 10;
	d = 5;
	e = 2;
	f = 1;
	
	for(A = 1;A <= 2;A++)
	{
		for(B = 1;B <= 5;B++)
		{
			for(C = 1;C <= 10;C++) vc  
			{
				for(D = 1;D <= 20;D++)
				{
					for(E = 1;E <= 50;E++)
					{
						for(F = 1;F <= 100;F++)
						if(A * a + B * b + C * c + D * d + E * e + F * f == 100)
						printf("A=%d\t B=%d\t C=%d\t D=%d\t E=%d\t F=%d\t\n",A,B,C,D,E,F);
					}
				}
			}
		}
	}
	return 0;
}
