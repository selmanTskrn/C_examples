#include <stdio.h>

int main ()
{
	int  carpim=1, adet=0;
	
	while ( carpim<15000 ){
		carpim=carpim*3;
		adet++;
	} 
	printf("15000 den buyuk ve 3'un kuvveti olan en kucuk tamsayi %d"
	"\nBu sayi3'un %d. kuvvetidir", carpim, adet);
	return 0;
}