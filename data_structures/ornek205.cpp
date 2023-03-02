#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct dugum{
	char marka[20];
	float tutar;
	struct dugum *ptr;
}Dugum;
void ekle( Dugum **, char [], float);
void yazdir( Dugum *, FILE *);
int main()
{
	Dugum *basptr = NULL;
	char marka[20];
	float tutar;
	int s;
	
	FILE *dosya1;
	
	if ((dosya1 = fopen("205toplam.dat","w")) == NULL){
		printf("Dosya acilamadi");
		return 1;
	}
	
	printf("PROGRAMDAN CIKMAK ICIN GIRDI OLARAK 0 0 GIRINIZ\n"
	"Marka, tutar giriniz : ");
	scanf("%s%f", marka, &tutar);
	while( tutar != 0 ){
		ekle( &basptr, marka, tutar);
		printf("Marka, tutar giriniz : ");
		scanf("%s%f", marka, &tutar);
	}
	
	yazdir(basptr , dosya1);
	
	printf("PROGRAM SONA ERDI\n"
	"OZET BILGILER toplam.dat DOSYASıNA KAYDEDILDI");
	fclose(dosya1);
	return 0;
	
}
void ekle( Dugum **p, char marka[], float tutar)
{
	Dugum *yeniptr, *onceptr, *sonraptr;
	int test = 0;
	
	yeniptr = (Dugum *)malloc(sizeof(Dugum));
	
	if (yeniptr != NULL){
		strcpy(yeniptr->marka, marka);
		yeniptr->tutar = tutar;
		yeniptr->ptr = NULL;
		
		onceptr = NULL;
		sonraptr = *p;
		while(sonraptr != NULL){
			if(strcmp(sonraptr->marka , marka) == 0){
				test++;
				sonraptr->tutar += tutar;
				free(yeniptr);
				break;
			}
			onceptr = sonraptr;
			sonraptr = sonraptr->ptr;
		}
		if( test == 0 && onceptr == NULL){
			yeniptr->ptr = *p;
			*p = yeniptr;
			
		}
		else if( test == 0 ){
			onceptr->ptr = yeniptr;
			yeniptr->ptr = sonraptr;
	
		}
	}
	
}
void yazdir(Dugum *p, FILE *dosya)
{
	if(p == NULL)
		printf("Liste Bos.");
	else{
		while(p != NULL){
			printf("%s %.2f\n", p->marka, p->tutar);
			fprintf(dosya,"%s %.2f\n", p->marka, p->tutar);
			p = p->ptr;
		}
	}
}