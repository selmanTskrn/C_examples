#include <stdio.h>

int main()
{
	int sayi, i1, i2, direnc=0;
	
	printf("Sayiyi giriniz : ");
	scanf("%d", &sayi);
	
	while (sayi>99 || sayi<10){
		printf("Yanlis Lutfen 2 basamakli sayiyi giriniz : ");
		scanf("%d", &sayi);
	}

	while ( sayi>10){
		
		i1= (sayi-sayi%10)/10;
		i2= sayi%10;
		sayi= i1*i2;
		direnc++;
	}
	printf("Carpim direnci = %d", direnc);
}