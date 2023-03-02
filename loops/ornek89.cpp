#include <stdio.h>

int main ()
{
	int adet, sayi;
	int neg=0;
	int poz = 0 ;
	
	printf("Kac adet sayi girilecek : ");
	scanf("%d", &adet);
	printf("Sayilar (%d tane) : ", adet);
	
	for (int i = 1; i <= adet; i++){
		scanf("%d", &sayi);
		if ( sayi < 0)
			neg++;
		if ( sayi > 0)
			poz++;
	}
	printf("Girilen %d sayidan %d tanesi negatif, %d tanesi pozitiftir.", adet, neg, poz);
	return 0;
	
}