#include <stdio.h>
#include <math.h>

void aradakiAcilariBul( int, int, float *, float *);

int main()
{
	int saat = 3, dakika = 30;
	float kucukAci, buyukAci;
	
	aradakiAcilariBul(saat, dakika, &kucukAci, &buyukAci);
	printf("Kucuk aci = %.2f\nBuyuk aci = %.2f", kucukAci, buyukAci);
	return 0;
}
void aradakiAcilariBul( int saat, int dakika, float *kucuk, float *buyuk)
{
	float s1, s2;
	
	s1 = dakika*6; 
	s2 = saat*30 + dakika*0.5;
	
	if (fabs(s2-s1) < 180){
		*kucuk = fabs(s2-s1);
		*buyuk = 360 - *kucuk;
	}
	else {
		*buyuk = fabs(s2-s1);
		*kucuk = 360 - *buyuk;
	}
	
	
}