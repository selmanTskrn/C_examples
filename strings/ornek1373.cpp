#include <stdio.h>
#include <string.h>

void kisaTarihKopyala( char [], char []);

int main()
{
	char uzun[30];
	char kisa[15];
	
	printf("Uzun tarih dizgisini giriniz (gun ay yil) : ");
	fgets(uzun, 30, stdin);
	
	kisaTarihKopyala(uzun, kisa);
	
	printf("---------------------\n"
	"Tarihin kisa hali : %s", kisa);
}
void kisaTarihKopyala( char uzun[], char kisa[])
{
	char *ptr;
	
	ptr = strtok(uzun, " ");
	strcpy(kisa, ptr);
	strcat(kisa, "/");
	ptr = strtok(NULL, " ");
	
	if ( ptr == "ocak")
		strcat(kisa, "01/");
	else if( strcmp( ptr, "subat")==0)
		strcat(kisa, "02/");
	else if( strcmp( ptr, "mart")==0)
		strcat(kisa, "03/");
	else if( strcmp( ptr, "nisan")==0)
		strcat(kisa, "04/");
	else if( strcmp( ptr, "mayis")==0)
		strcat(kisa, "05/");
	else if( strcmp( ptr, "haziran")==0)
		strcat(kisa, "06/");
	else if( strcmp( ptr, "temmuz")==0)
		strcat(kisa, "07/");
	else if( strcmp( ptr, "agustos")==0)
		strcat(kisa, "08/");
	else if( strcmp( ptr, "eylul")==0)
		strcat(kisa, "09/");
	else if( strcmp( ptr, "ekim")==0)
		strcat(kisa, "10/");
	else if( strcmp( ptr, "kasim")==0)
		strcat(kisa, "11/");	
	else if( strcmp( ptr, "aralik")==0)
		strcat(kisa, "12/");
	
	ptr = strtok(NULL, " ");
	strcat(kisa, ptr);
}