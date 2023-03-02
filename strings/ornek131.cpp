#include <stdio.h>

int main()
{
	char cumle[255];
	int sayac = 1;
	int i;
	
	printf("Cumlenizi giriniz : ");
	fgets(cumle, 255, stdin);
	for ( i=0 ; cumle[i]!='\0' ; i++){
		if (cumle[i] == ' ')
			sayac++;
	}
	
	printf("Girdiginiz cumle %d kelimeden olusmaktadir.", sayac);
	return 0;
}