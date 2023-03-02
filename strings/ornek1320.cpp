#include <stdio.h>
#include <string.h>

int main()
{
	char cumle[3][150];
	char kelime[10];
	char *araptr;
	int i, j, adet=0;
	
	fgets(cumle[0], 150, stdin);
	fgets(cumle[1], 150, stdin);
	fgets(cumle[2], 150, stdin);
	
	printf("Aranacak kelimeyi giriniz : ");
	scanf("%s", kelime);
	
	for ( i=0 ; i<3 ; i++){
		araptr = strstr( cumle[i], kelime );
		while ( araptr != NULL ){
			adet++;
			araptr++;
			araptr = strstr( araptr, kelime );
		}
		
	}
	printf(" \" %s \" kelimesi cumle icinde %d defa gecer.", kelime, adet);
	return 0;
}