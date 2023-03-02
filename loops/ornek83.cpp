#include <stdio.h>

int main ()
{
	int a;
	
	printf("ASCII KOD    B. KARAKTER    K.KARAKTER \n");
	
	for ( a = 65 ; a < 85 ; a++){
		printf("%d	     %c		    %c\n", a, a, a+32);
		
	}
	return 0;
}