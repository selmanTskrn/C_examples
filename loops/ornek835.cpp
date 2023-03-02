#include <stdio.h>

int main ()
{	int adet=0;
	printf("Sayilar ");
	for ( int sayi=1000 ; sayi<=9999 ; sayi++){
		int a, b, c, d, ab, cd, ba, dc ;
		
		a= (sayi-sayi%1000)/1000;
		b= (sayi%1000-sayi%100)/100;
		c= (sayi%100-sayi%10)/10;
		d= sayi%10;
		
		ab= 10*a+b;
		cd= 10*c+d;
		ba= 10*b+a;
		dc= 10*d+c;
		
		if ( ab*cd == ba*dc ){
			printf("%d, ", sayi);
			adet++;
		}
	}
	printf("toplam = %d", adet);
	return 0;
}