#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
	char sayi[11];
	int s, i=0, toplam = 0;
	
	printf("Ikilik sayiyi giriniz : ");
	scanf("%s", sayi);
	s = strlen( sayi );

	while ( sayi[i] != '\0'){
		if ( sayi[i] == '.'){
			toplam += pow( 2 , s-1);
		}
		i++;
		s--;
	}
	printf("Girilen sayinin onluk sistemdeki karsiligi : %d", toplam);
	return 0;
}