#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct dugum{
	char ad[20];
	char tel[20];
	struct dugum *solptr;
	struct dugum *sagptr;
}Dugum;
int menu();
void agacaEkle( Dugum **, char [], char []);
void siraliYaz( Dugum *);
void arama( Dugum *, char [] , char []);
int main()
{
	Dugum *kokptr = NULL;
	char ad[20], tel[20];
	char aranan[20];
	int secim;
	
	while((secim = menu()) != 3){
		switch (secim){
			case 0:
				printf("Eklenecek adi giriniz : ");
				scanf("%s", ad);
				printf("Eklenecek telefonu giriniz : ");
				scanf("%s", tel);
				agacaEkle( &kokptr , ad, tel);
				break;
			case 1:
				siraliYaz( kokptr );
				break;
			case 2:
				printf("Aranacak adi giriniz : ");
				scanf("%s", ad);
				arama( kokptr , ad, aranan);
				printf("%s", aranan);
				break;
		}
	}
}
int menu()
{
	int secim;
	
	printf("\n---------MENU---------\n"
	"0- Agaca yeni eleman ekleme\n"
	"1- Agactaki elemanlari yazdirma\n"
	"2- Ada gore telefon numarasi bulma\n"
	"3- Cikis\nSeciminiz (0-3) : ");
	scanf("%d", &secim);
	
	return secim;
}
void agacaEkle(Dugum **p, char ad[], char tel[])
{
	if(*p == NULL){
		*p = (Dugum *)malloc(sizeof(Dugum));
		if( *p != NULL){
			strcpy((*p)->ad , ad);
			strcpy((*p)->tel , tel);
			(*p)->solptr = NULL;
			(*p)->sagptr = NULL;
			printf("Agaca ekleme basarili.\n");
		}
		else
			printf("Bellek dolu.\n");
	}
	else{
		if (ad[0] < (*p)->ad[0])
			agacaEkle( &((*p)->solptr) , ad, tel);
		else if (ad[0] > (*p)->ad[0])
			agacaEkle( &((*p)->sagptr) , ad, tel);
		else {
			if (ad[1] <= (*p)->ad[1])
				agacaEkle( &((*p)->solptr), ad, tel);
			else
				agacaEkle( &((*p)->sagptr), ad, tel);
		}
	}
}
void siraliYaz( Dugum *p)
{
	if(p != NULL){
		siraliYaz(p->solptr);
		printf("%s, ", p->ad);
		siraliYaz(p->sagptr);
	}
}
void arama(Dugum *p, char ad[], char aranan[])
{
	if (strcmp(p->ad , ad) == 0){
		strcpy(aranan , p->tel);
	}
	else if( p == NULL){
		strcpy(aranan, "Bulunamadi.");
	}
		
	else{
		if (ad[0] < p->ad[0])
			arama(p->solptr , ad , aranan);
		else if (ad[0] > p->ad[0])
			arama(p->sagptr , ad, aranan);
		else{
			if(ad[1] <= p->ad[1])
				arama(p->solptr , ad, aranan);
			else
				arama(p->sagptr , ad , aranan);
		}
	}
}