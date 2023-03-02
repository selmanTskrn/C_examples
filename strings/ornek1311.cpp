#include <stdio.h>
#include <stdlib.h>

int main()
{
	char sayi[50];
	int toplam = 0;
	int i=0;
	
	printf("Ozel sayi sistemindeki sayiyi giriniz : ");
	scanf("%s", sayi);
	
	while ( sayi[i] != '\0'){
		switch (sayi[i]){
			case 'I':
				toplam += 1;
				break;
			case 'U':
				toplam += 10;
				break;
			case 'Z':
				toplam += 100;
				break;
		}
		i++;
	}
	printf("Girilen sayinin onluk sistemdeki karsiligi : %d", toplam);
	return 0;
}