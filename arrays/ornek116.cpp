#include <stdio.h>

int main()
{
	int a[10];
	int toplam = 0, i;
	float ortalama;
	printf("a dzisinin elamanlarini giriniz : ");
	for ( i=0 ; i<10 ; i++){
		scanf("%d", &a[i]);
		toplam = toplam + a[i];
	}
	ortalama = toplam/10.0;
	printf("Dizinin ortalamasi %.2f dir", ortalama);
	printf("\nOrtalamadan kucuk olanlar : ");
	for ( i=0 ; i<10 ; i++){
		if ( a[i] < ortalama )
			printf("%d ", a[i]);
	}
	return 0;
	
}