#include <stdio.h>
#include <stdlib.h>
typedef struct dugum{
	char ch;
	struct dugum *ptr;
}Dugum;

int menu();
void yazdir( Dugum *);
char kuyrugaEkle(Dugum **,Dugum **, char);
char kuyruktanSil(Dugum **, Dugum **);

int main()
{
	Dugum *basptr = NULL;
	Dugum *sonptr = NULL;
	int secim, i;
	char ch, sonuc;
	
	while ((secim = menu()) != 3){
		switch (secim){
			case 0:
				yazdir(basptr);
				break;
			case 1:
				printf("Eklenecek harfi giriniz : ");
				scanf(" %c", &ch);
				sonuc = kuyrugaEkle(&basptr, &sonptr, ch);
				if( sonuc != '\0')
					printf("Eleman ekleme basarili\n");
				else
					printf("Eleman ekleme basarisiz\n");
				break;
			case 2:
				kuyruktanSil(&basptr, &sonptr);
				break;
		}
	}
}
int menu()
{
	int sonuc;
	
	printf("-----------MENU------------\n"
	"0- Kuyruktaki elemanlari yazdirma\n"
	"1- Kuyruga yeni eleman ekleme\n"
	"2- Kuyruktan eleman cikarma\n"
	"3- Cikis\nSeciminiz (0-3) : ");
	scanf("%d", &sonuc);
	return sonuc;
}
void yazdir(Dugum *p)
{
	Dugum *sonptr;
	
	sonptr = p;
	
	if(p == NULL)
		printf("Kuyruk bos\n");
	else{
		printf("Liste :\n");
		while(p != NULL){
			printf("%c --> ", p->ch);
			p = p->ptr;
		}
		printf("\n\n");
	}
}
char kuyrugaEkle(Dugum **bptr, Dugum **sptr, char ch)
{
	Dugum *yeniptr;
	
	yeniptr = (Dugum *)malloc(sizeof(Dugum));

	if(yeniptr != NULL){
		yeniptr->ch = ch;
		yeniptr->ptr = NULL;
		
		if(*bptr == NULL)
			*bptr = yeniptr;
		else
			(*sptr)->ptr = yeniptr;
		
		*sptr = yeniptr;
		return ch;
	}
	else
		printf("%c eklenemedi. Bellek dolu\n", ch);
	return 0;
}
char kuyruktanSil(Dugum **bptr, Dugum **sptr)
{
	Dugum *geciciptr;
	char ch;
	
	geciciptr = *bptr;
	ch = (*bptr)->ch;
	*bptr = (*bptr)->ptr;
	
	if(*bptr == NULL)
		*sptr = NULL;
	free(geciciptr);
	return ch;
}