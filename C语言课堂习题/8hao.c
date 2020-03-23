#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 
       int i,l; 
          scanf("%d",&i); 
               for(;i>0;) 
              { 
          printf("%d",i%10); 
           i = i / 10; 
         } 
          

	return 0;

	
}
