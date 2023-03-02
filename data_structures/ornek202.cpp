#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct dugum{
	char ad[20];
	int yas;
	int kilo;
	float boy;
	struct dugum *ptr;
}Dugum;

int listeyeEkle( Dugum **, Dugum );
void listeyiYaz( Dugum *, FILE *);

int main()
{
	Dugum *basptr = NULL;
	Dugum oyuncu;
	int s;
	
	FILE *dosya1;
	FILE *dosya2;
	
	dosya1 = fopen("oyuncu.dat","r+");
	dosya2 = fopen("index.dat","w+");
	
	if (dosya1 == NULL || dosya2 == NULL){
		printf("Acilamayan dosya !!!");
		return 1;
	}
	
	fscanf(dosya1,"%s%d%d%f", oyuncu.ad, &oyuncu.yas, &oyuncu.kilo, &oyuncu.boy);
	while( !feof(dosya1) ){
		oyuncu.ptr = NULL;
		s = listeyeEkle(&basptr, oyuncu);
		fscanf(dosya1,"%s%d%d%f", oyuncu.ad, &oyuncu.yas, &oyuncu.kilo, &oyuncu.boy);
	}
	
	listeyiYaz(basptr, dosya2);
	
	fclose(dosya1); fclose(dosya2);
	return 0;
}
int listeyeEkle( Dugum **p, Dugum oyuncu)
{
	struct dugum *yeniptr;
	struct dugum *onceptr;
	struct dugum *sonraptr;
	
	yeniptr = (Dugum *)malloc(sizeof(Dugum));

	if (yeniptr != NULL){
		*yeniptr = oyuncu;
		yeniptr->ptr = NULL;
	
		onceptr = NULL;
		sonraptr = *p;
		
		while (sonraptr != NULL && oyuncu.boy > sonraptr->boy){
			onceptr = sonraptr;
			sonraptr = sonraptr->ptr;
		}
		if (onceptr == NULL){
			yeniptr->ptr = *p;
			*p = yeniptr;
			return yeniptr->yas;
		}
		else{
			onceptr->ptr = yeniptr;
			yeniptr->ptr = sonraptr;
			return yeniptr->yas;
		}
	}
	else 
		return 0;
}
void listeyiYaz(Dugum *p, FILE *dosya2)
{
	printf("Oyuncular Boy Sirasina Gore :\n"
	"---------------------------\n");
	
	if( p == NULL)
		printf("Liste bos\n");
	else{
		while (p != NULL){
			printf("%s %d %d %.2f\n", p->ad, p->yas, p->kilo, p->boy);
			fprintf(dosya2,"%s %d %d %.2f\n", p->ad, p->yas, p->kilo, p->boy);
			p = p->ptr;
		}
	}
}