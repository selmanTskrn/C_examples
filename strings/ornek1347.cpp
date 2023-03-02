#include <stdio.h>
#include <string.h>

#define SIZE 255

void aynala( char [], char [], char []);

int main()
{
	char cumle[SIZE] = "ali az calistigindan basit sorularda az zaman kaybetmedi";
	char aranacak[20];
	char konacak[20];
	
	printf("Cumleyi giriniz : %s\n", cumle);
	//fgets(cumle, 255, stdin);
	
	printf("Aranacak kelime : ");
	scanf("%s", aranacak);
	
	printf("Yerine konacak kelime : ");
	scanf("%s", konacak);
	
	aynala(cumle, aranacak, konacak);
	
	printf("\nDegistirilmis hali : "
	"\n%s", cumle);
	return 0;
}
void aynala( char cumle[], char ara[], char koy[])
{
	int i, len;
	char *araptr;
	char yedek[SIZE];
	
	len = strlen(ara);
	araptr = strstr(cumle, ara);

	while (araptr != NULL){
		strcpy(yedek, araptr+len);
		*(araptr) = '\0';
		strcat(araptr, koy);
		strcat(cumle, yedek);
		araptr = strstr(araptr+1, ara);
	}
	
	
}