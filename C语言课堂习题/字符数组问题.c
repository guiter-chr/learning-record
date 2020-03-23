#include <stdio.h>
#include <stdlib.h>
#define N 10
/* */

int main(int argc, char *argv[]) {
	char  str[N] = "China.",str2[N] = "haha";
	int length;
	
	strncat(str,str2,4);
	puts(str); 
	return 0;
}
