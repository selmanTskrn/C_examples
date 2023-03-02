#include <stdio.h>
#include <ctype.h>
struct letter{
	char harf;
	int adet;
};
typedef struct letter Harf;

int main()
{
	Harf harfler[26] = {"" , 0};
	int test, i;
	char ch;
	
	FILE *dosya1;
	FILE *dosya2;
	
	dosya1 = fopen("1931mektup.txt","r");
	dosya2 = fopen("1931frekans.txt","w");
	
	if(dosya1 == NULL || dosya2 == NULL){
		printf("Acilamayan dosyalar var");
		return 1;
	}
	for(i=0 ; i<26 ; i++)
	{
		harfler[i].harf = i + 65;
	}
	ch = fgetc(dosya1);
	while( !feof(dosya1) ){
		if( isalpha(ch) )
		{
			for(i=0 ; i<26 ; i++)
			{
				if( toupper(harfler[i].harf) == toupper(ch)){
					harfler[i].adet++;
					break;
				}
			}
		}
		ch = fgetc(dosya1);
	}
	for(i=0 ; i<26 ; i++)
		fprintf(dosya2,"%c	%d\n", harfler[i].harf, harfler[i].adet);
	fclose(dosya1); fclose(dosya2);
	return 0;
}