#include <stdio.h>
#include <string.h>
int main()
{
	char cumle[150];
	char dosyaadi[20];
	char c;
	FILE *dptr;
	
	printf("Yazilanlar hangi dosyaya kaydedilecek : ");
	scanf("%s", dosyaadi);
	
	if (( dptr = fopen(dosyaadi, "a")) == NULL ){
		printf("Dosya acilamadi");
		return 1;
	}
	printf("-------------------------\n");
	c = getchar();
	while ( c != EOF ){
		fputc(c, dptr);
		c = fgetc(stdin);
	}
	fclose(dptr);
	return 0;
}