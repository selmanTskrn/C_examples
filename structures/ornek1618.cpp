#include <stdio.h>
#include <math.h>
typedef struct ondalik{
	char isaret;
	int tamkismi;
	int ondalikkismi;
} Ondalik;
void floatToplam( float, float, Ondalik *);
int main()
{
	Ondalik sonuc;
	float sayi1 = -987.6543, sayi2 = 12.34;
	
	floatToplam(sayi1, sayi2, &sonuc);
	printf("Sonucun tam kismi = %ld\n", sonuc.tamkismi);
	printf("Sonucun ondalik kismi = %ld\n", sonuc.ondalikkismi);
	printf("Sonucun isareti = %c", sonuc.isaret);
	return 0;
}
void floatToplam( float a1, float a2, Ondalik *ptr)
{
	float sayi;
	
	sayi = a1 + a2;
	if ( sayi > 0)
		ptr->isaret = '+';
	else
		ptr->isaret = '-';
	
	sayi = fabs(sayi);
	ptr->tamkismi = floor(sayi);
	ptr->ondalikkismi = 1000 * (sayi - (ptr->tamkismi));
}