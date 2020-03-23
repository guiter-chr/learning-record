#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//1~3 4~6 7~9 10~12 
int main(int argc, char *argv[]) {
	int month,i;
	
	srand( (unsigned)time(NULL) );
	for(i = 1;i <= 100;i++)
	{
		month = rand()%12;
		month = month + 1;
	
	
	if(month >= 1 && month <= 3){
			printf(" Spring\t");
		}else  if(month >= 3 && month <= 6){
				printf(" Summer\t");
			}else	if(month >= 6 && month <= 9){
					printf(" Autumn\t");
		
				}else	if(month >= 9 && month <= 12){
						printf(" Winter\t");
					}else{
							printf(" error\t");
				    	} 
    
    }
	
	return 0;
}
