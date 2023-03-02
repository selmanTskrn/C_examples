#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char ogrenci[10][20];
	char yedek[20];
	int i, j;
	char *ptr1, *ptr2;
	
	puts("Isim ve notlari giriniz : ");
	
	for( i=0 ; i<10 ; i++){
		fgets(ogrenci[i], 20, stdin);
	}
	
	puts("----Nota gore sirali----");
	
	for ( i=1 ; i<10 ; i++){
		for ( j=0 ; j<9 ; j++){
			ptr1 = strchr(ogrenci[j], ' ');
			ptr2 = strchr(ogrenci[j+1], ' ');
			if ( atoi( ptr1 ) < atoi( ptr2 ) ){
				strcpy(yedek, ogrenci[j]);
				strcpy(ogrenci[j], ogrenci[j+1]);
				strcpy(ogrenci[j+1], yedek);
			}
		}
	}
	
	for ( i=0 ; i<10 ; i++)
		printf("%s", ogrenci[i]);
	
	return 0;
}