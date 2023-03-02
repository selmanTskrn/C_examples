#include <stdio.h>

int main()
{
	char dosya_adi[20];
	char ch;
	int acikbrace = 0, kapalibrace = 0;
	FILE *dosya;
	
	printf("Dosya adi : ");
	scanf("%s",dosya_adi);
	
	if(( dosya = fopen(dosya_adi,"r")) == NULL){
		printf("Dosya acilamadi");
		return 1;
	}
	
	ch = fgetc(dosya);
	while( !feof(dosya) ){
		if (ch == '{')
			acikbrace++;
		else if (ch == '}')
			kapalibrace++;
		ch = fgetc(dosya);
	}
	if(acikbrace == kapalibrace)
		printf("Bu dosyada \"Compound statement missing }\" hatasi yoktur");
	else
		printf("Bu dosyada \"Compound statement missing }\" hatasi vardir");
	fclose(dosya);
	return 0;
}