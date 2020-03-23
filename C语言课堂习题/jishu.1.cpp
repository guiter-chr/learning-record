#include <stdio.h>
#include <math.h>
/*  */

int main(int argc, char* argv[]) {
	
	float a,m,n,h,f,w,x;
	const float  e = 2.7;
	a = 3;
	x = 2.4;
	m = -5;
	n = -2;
	h = sqrt((log(5.1)+sin(2*a))/(cos(x-1)+pow(e,3)));
	f = abs(m) - pow(n,4);
	w = h + f;
	printf("w =%f ",w);
	
	return 0;
}
