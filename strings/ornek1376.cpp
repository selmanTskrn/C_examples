#include <stdio.h>

void hesapla( char [], int *, int *);

int main()
{
	char morse[150];
	int sayi=0, basamak=0;
	
	printf("Morse kodunu giriniz : \n");
	fgets(morse, 150, stdin);
	
	printf("--------------------------\n");
	
	hesapla( morse, &sayi, &basamak);
	printf("Sayisal karsiligi  : %d"
		   "\nBasamak Sayisi     : %d", sayi, basamak);
	
	return 0;
}
void hesapla( char cumle[], int *sayip, int *basamakp)
{
	int i, j;
	int sayi;
	
	for ( i=0 ; cumle[i] != '\0' ; i += 6)
	{
		if (cumle[i+4]=='-'){
			sayi = 5;
			for (j=i ; j<=i+5 ; j++){
				if ( cumle[j] == '-')
					sayi--;
			}
		}
		else if (cumle[i+4]=='.'){
			sayi = 10;
			for (j=i ; j<=i+5 ; j++){
				if ( cumle[j] == '.')
					sayi--;
			}
		}
		*sayip = 10*(*sayip) + sayi;
		*basamakp += 1;
	}
}