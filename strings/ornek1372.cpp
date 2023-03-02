#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void uzunTarihKopyala( char *, char *);

int main()
{
	char kisa[15];
	char uzun[30];
	
	printf("Kisa tarih dizgisini giriniz (gg/aa/yyyy) : ");
	fgets(kisa, 15, stdin);
	
	uzunTarihKopyala( kisa, uzun);
	
	printf("------------------------\n"
	"Tarihin uzun hali : %s", uzun);
	return 0;
}
void uzunTarihKopyala( char *kisap, char *uzunp)
{
	char *ptr;
	int i;
	
	ptr = strtok(kisap , "/");
	strcpy(uzunp, ptr);
	strcat(uzunp, " ");
	ptr = strtok(NULL, "/");
	i = atoi(ptr);
	switch (i){
		case 1:
			strcat(uzunp, "Ocak");
			break;
		case 2:
			strcat(uzunp, "Subat");
			break;
		case 3:
			strcat(uzunp, "Mart");
			break;
		case 4:
			strcat(uzunp, "Nisan");
			break;
		case 5:
			strcat(uzunp, "Mayis");
			break;
		case 6:
			strcat(uzunp, "Haziran");
			break;
		case 7:
			strcat(uzunp, "Temmuz");
			break;
		case 8:
			strcat(uzunp, "Agustos");
			break;
		case 9:
			strcat(uzunp, "Eylul");
			break;
		case 10:
			strcat(uzunp, "Ekim");
			break;
		case 11:
			strcat(uzunp, "Kasim");
			break;
		case 12:
			strcat(uzunp, "Aralik");
			break;
	}
	strcat(uzunp, " ");
	
	ptr = strtok(NULL, "/");
	strcat(uzunp, ptr);
}