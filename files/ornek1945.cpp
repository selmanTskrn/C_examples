#include <stdio.h>
#include <string.h>
struct siparis{
	char masa[15];
	char icki[10];
	char adetler[20];
};
typedef struct siparis Siparis;
int siparisAdet( char []);
int main()
{
	Siparis siparis;
	
	char aranan_icki[15];
	char enCokMasa[15];
	int adet, enCok = 0;
	
	FILE *dosya1;
	
	if((dosya1 = fopen("siparis.txt","r")) == NULL){
		printf("Dosya acilamadi.");
		return 1;
	}
	
	printf("Icecek adi : ");
	scanf("%s", aranan_icki);
	
	fscanf(dosya1,"%s%s%s", siparis.masa, siparis.icki, siparis.adetler);
	while( !feof(dosya1) ){
		if (strcmp(siparis.icki , aranan_icki) == 0){
			adet = siparisAdet(siparis.adetler);
			if (adet > enCok){
				strcpy(enCokMasa , siparis.masa);
				enCok = adet;
			}
		}
		fscanf(dosya1,"%s%s%s", siparis.masa, siparis.icki, siparis.adetler);
	}
	if( !enCok ){
		printf("Bu icecek tuketilmemistir");
	}
	else
		printf("En fazla %s icen:\n"
		"%s (%d)",aranan_icki, enCokMasa, enCok);
	fclose(dosya1);
	return 0;
}
int siparisAdet(char adetler[])
{
	int i=0;
	
	while (adetler[i]!='\0'){
		i++;
	}
	return i;
}