#include <stdio.h>

int main()
{
	int sayi, sayi1, sayi2, sayi3;
	
	for (int sayi=2; sayi<=2400 ; sayi++ ){
		sayi1= sayi/100;
		sayi2= sayi%100;
		
		sayi3= sayi1*sayi1+sayi2*sayi2;
		
		if(sayi3==sayi ){
			if (sayi1<24 && sayi2<60)
				printf("saat = %d.%d", sayi1,sayi2 );
		}
	}
	return 0;
}