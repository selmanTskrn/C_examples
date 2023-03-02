#include <stdio.h>

int main ()
{
	int sayi, sonuc, r1, r2, r3, adet=0;
	
	printf("Aranilan sayilar : ");

	for (sayi = 100; sayi<=999 ; sayi++ ){
		
		
		r1 = (sayi-sayi%100)/100;
		r2 = (sayi%100-sayi%10)/10;
		r3 = sayi%10;
		
		sonuc = r1*r1*r1 + r2*r2*r2 + r3*r3*r3 ;
		
		if ( sonuc == sayi ){
			printf("%d, ", sayi);
			adet++;
		}
	}
	printf("\nBu ozellige sahip %d adet uc basamakli sayi vardir. ", adet);
	return 0;
}