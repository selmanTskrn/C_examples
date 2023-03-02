#include <stdio.h>
#include <ctype.h>
int main()
{
	char kelime[25];
	char ch;
	int i=0;
	int oteleme = 3;
	
	FILE *dosya1;
	FILE *dosya2;
	
	dosya1 = fopen("ornek1918.sfr","r");
	dosya2 = fopen("ornek1918.orj","w");
	
	if (dosya1 == NULL || dosya2 == NULL){
		printf("Acilamayan dosyalar var");
		return 1;
	}
	ch = fgetc(dosya1);
	while( !feof(dosya1) ){
		if (ch >= 65 && ch <= 90){
			ch = ch - oteleme;
			if (ch > 90)
				ch = (ch % 90) + 65;
			else if (ch < 65)
				ch = ch + 26;
		}
		if (ch >= 97 && ch <= 122){
			ch = ch - oteleme;
			if (ch > 122)
				ch = (ch % 122) + 97;
			else if (ch < 97)
				ch = ch + 26;
		}
		if (isdigit(ch)){
			ch = ch - oteleme;
			printf("%c %d\n",ch,ch);
		}
		fputc(ch , dosya2);
		ch = fgetc(dosya1);
	}
	fclose(dosya1); fclose(dosya2);
	return 0;
}