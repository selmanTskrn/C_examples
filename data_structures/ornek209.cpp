#include <stdio.h>
#include <stdlib.h>
typedef struct ogrenci{
	char ad[20];
	int ara1;
	int ara2;
	int final;
	float ortalama;
	struct ogrenci *ptr;
}Ogrenci;
void push(Ogrenci **, Ogrenci);
void yazdir(Ogrenci *, FILE *);
int main()
{
	Ogrenci *basptr = NULL;
	Ogrenci ornek;
	
	FILE *dosya1;
	FILE *dosya2;
	
	dosya1 = fopen("209ogrenci.dat","r");
	dosya2 = fopen("209ters.dat","w");
	
	if(dosya1 == NULL && dosya2 == NULL){
		printf("Dosya acilamadi");
		return 1;
	}
	
	fscanf(dosya1,"%s%d%d%d%f", ornek.ad, &ornek.ara1, &ornek.ara2, &ornek.final, &ornek.ortalama);
	while( !feof(dosya1) ){
		push( &basptr , ornek );
		fscanf(dosya1,"%s%d%d%d%f", ornek.ad, &ornek.ara1, &ornek.ara2, &ornek.final);
	}
	
	yazdir( basptr , dosya2 );
	
	fclose(dosya1); fclose(dosya2);
	return 0;
}
void push(Ogrenci **p, Ogrenci ornek)
{
	Ogrenci *yeniptr;
	
	yeniptr = (Ogrenci *)malloc(sizeof(Ogrenci));
	
	if(yeniptr != NULL){
		*yeniptr = ornek;
		yeniptr->ptr = *p;
		*p = yeniptr;
	}
	else
		printf("Ekleme basarisiz. Bellek dolu\n");
}
void yazdir(Ogrenci *p, FILE *dosya)
{
	if(p == NULL)
		printf("Liste bos\n");
	else{
		printf("Ogrenciler ters sirada :\n"
		"----------------------------\n");
		while(p != NULL){
			printf("%s %d %d %d %.2f\n", p->ad, p->ara1, p->ara2, p->final, p->ortalama);
			fprintf(dosya,"%s %d %d %d %.2f\n", p->ad, p->ara1, p->ara2, p->final, p->ortalama);
			p = p->ptr;
		}
	}
}
