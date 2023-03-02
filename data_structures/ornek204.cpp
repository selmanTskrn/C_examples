#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct siparis{
	char ad[20];
	float tutar;
	struct siparis *ptr;
}Siparis;
void ekle( Siparis **, char [], float );
void yazdir(Siparis *p, FILE *);
int main()
{
	Siparis *basptr = NULL;
	char ad[20];
	float tutar;
	int s;
	
	FILE *dosya1;
	FILE *dosya2;
	
	dosya1 = fopen("siparis.dat","r");
	dosya2 = fopen("toplam.dat","w");
	
	if(dosya1 == NULL || dosya2 == NULL){
		printf("Acilamayan dosyalar var");
		return 1;
	}
	
	fscanf(dosya1,"%s%f", ad, &tutar);
	while( !feof(dosya1) ){
		ekle( &basptr, ad, tutar);
		fscanf(dosya1,"%s%f", ad, &tutar);
	}
	yazdir( basptr, dosya2);
	fclose(dosya1); fclose(dosya2);
	return 0;
}
void ekle(Siparis **p, char ad[], float tutar)
{
	Siparis *yeniptr, *onceptr, *sonraptr;
	int test = 0;
	
	yeniptr = (Siparis *)malloc(sizeof(Siparis));
	if (yeniptr != NULL){
		
		yeniptr->tutar = tutar;
		strcpy(yeniptr->ad, ad);
		yeniptr->ptr = NULL;
		
		onceptr = NULL;
		sonraptr = *p;
		
		while(sonraptr != NULL ){
			if (strcmp(sonraptr->ad,ad) == 0){
				test++;
				sonraptr->tutar += tutar;
				free(yeniptr);
				break;
			}
			onceptr = sonraptr;
			sonraptr = sonraptr->ptr;
		}
		if (test == 0 && onceptr == NULL){
			yeniptr->ptr = *p;
			*p = yeniptr;
		}
		else if ( test == 0){
			onceptr->ptr = yeniptr;
			yeniptr->ptr = sonraptr;
		}
	}
	
}
void yazdir(Siparis *p, FILE *dosya2)
{
	if(p == NULL)
		printf("Liste bos.");
	else{
		while(p != NULL){
			printf("%s %.2f\n", p->ad, p->tutar);
			fprintf(dosya2,"%s %.2f\n", p->ad, p->tutar);
			p = p->ptr;
		}
	}
}