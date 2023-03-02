#include <stdio.h>
#include <ctype.h>
int main()
{
	int cumle = 0, kelime = 0, karakter = 0;
	char ch;
	char dosyaadi[20];
	FILE *dptr;
	
	printf("Hangi dosya hakkinda bilgi verilecek :");
	scanf("%s", dosyaadi);
	
	if(( dptr = fopen(dosyaadi, "r")) == NULL){
		printf("Dosya acilamadi");
		return 1;
	}
	ch = fgetc(dptr);
	while ( !feof(dptr) ){
		if (ispunct(ch)){
			kelime++;
			cumle++;
		}
		else if (ch == ' ')
			kelime++;
		if ( ch == '\n')
			karakter--;
		karakter++;
		ch = fgetc(dptr);
	}
	printf("---------------------\n");
	printf("Cumle sayisi : %d\n"
	"Kelime sayisi : %d\n"
	"Karakter sayisi : %d\n",cumle, kelime, karakter);
	fclose(dptr);
	return 0;
	
}