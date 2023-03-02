#include <stdio.h>
#include <ctype.h>

int hesapla( char [], int *);

int main()
{
	char cumle[150];
	int harf, hataHarf = 0;
	
	printf("Hastanin cumlesini giriniz : ");
	fgets(cumle, 150, stdin);
	
	printf("------------------------------\n");
	harf = hesapla( cumle, &hataHarf);
	printf("Bu cumle gercekte %d harften olusmustur.\n"
	"Hasta %d harfte hata yapmistir.",harf, hataHarf );
	
	return 0;
}
int hesapla( char cumle[], int *hataptr)
{
	int i;
	int harf = 0;
	
	for ( i=0 ; cumle[i] != '\0' ; i++)
	{
		if (isalpha(cumle[i])){
			if ( cumle[i]==cumle[i+1] && cumle[i+1]==cumle[i+2]){
			}
			else {
				*hataptr += 1;
			}
			harf++;
			i += 2;
		}
	}
	return harf;
}