#include <stdio.h>
#include <stdlib.h>

int main()
{
	char sifat[5][10] = {"Bu", "Su", "O", "Bir", "Birkac"};
	char ozne[5][10] = {"adam", "cocuk", "kus", "kedi", "araba"};
	char tumlec[5][10] = {"sinif", "kapan", "orman", "cayir", "agac"};
	char ektumlec[5][15] = {"a", "dan", "in ustunden", "in altindan", "in icinden"};
	char yuklem[5][10] = {"atladi.", "kacti.", "zipladi.", "kostu.", "dustu."};
	int rast, i;
	
	puts("Cumleler :");
	for ( i=0 ; i<20 ; i++){
		printf("%s ", sifat[rand()%5]);
		printf("%s ", ozne[rand()%5]);
		printf("%s ", tumlec[rand()%5]);
		printf("%s ", ektumlec[rand()%5]);
		printf("%s\n", yuklem[rand()%5]);
	}
	return 0;
}