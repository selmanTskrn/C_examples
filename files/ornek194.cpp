#include <stdio.h>

int main()
{
	FILE *dosya;
	char dosyaadi[15];
	char satir[250];
	
	printf("Icerigi goruntulenecek dosyanin adini giriniz :");
	scanf("%s", dosyaadi);
	
	if (( dosya = fopen(dosyaadi, "r")) == NULL){
		printf("Dosya acilamadi");
		return 1;
	}
	printf("-------------------------------------------\n");
	fgets(satir, 250, dosya);
	while( !feof(dosya) ){
		printf("%s",satir);
		fgets(satir, 250, dosya);
	}
	fclose(dosya);
	return 0;
}