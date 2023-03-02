#include <stdio.h>

int main ()
{
	int i, r1, r2, r3, r4, sayi ;
	
	for ( i=1000 ; i<=9999 ; i++){
		r1= (i-i%1000)/1000;
		r2= (i%1000-i%100)/100;
		r3= (i%100-i%10)/10;
		r4= i%10;
		
		sayi=(r1+r2+r3+r4)*(r1+r2+r3+r4)*(r1+r2+r3+r4);
		
		if ( i == sayi ){
			printf("%d, ", sayi);
		}
	}
	return 0;
}