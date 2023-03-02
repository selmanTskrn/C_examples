#include <stdio.h>
#include <stdlib.h>
struct dugum{
	int yas;
	struct dugum *ptr;
};

int monu();
int ekle( struct dugum **, int );
void listeyiYaz( struct dugum *);
int listesay( struct dugum *);

int main()
{
	struct dugum *basptr = NULL;
	int secim, yas, s;
	
	while((secim = monu()) != 3){
		switch (secim){
			case 0:
				listeyiYaz(basptr);
				break;
			case 1:
				printf("Eklenecek yasi giriniz : ");
				scanf("%d", &yas);
				s = ekle( &basptr , yas );
				if (s != 0)
					printf("Eleman ekleme basarili.");
				else
					printf("Eleman ekleme basarisiz");
				break;
			case 2:
				s = listesay(basptr);
				printf("Listedeki dugum sayisi %d dir", s);
				break;
		}
	}
}
void listeyiYaz( struct dugum *p)
{
	if (p == NULL){
		printf("Liste bos\n");
	}
	else{
		printf("Liste :\n");
		while(p != NULL){
			printf("%d --> ", p->yas);
			p = p->ptr;
		}
		printf("NULL\n\n");
	}
}
int monu()
{
	int secim;
	
	printf("\n\n-------------MENU-------------\n"
	"0- Listedeki elemanlari yazdirma\n"
	"1- Lİsteye yeni eleman ekleme\n"
	"2- Listedeki eleman sayisi\n"
	"3- Cikis\n");
	printf("Seciminiz (0-3) :");
	scanf("%d", &secim);
	return secim;
}
int ekle(struct dugum **p, int yas)
{
	struct dugum *yeniptr;
	struct dugum *onceptr;
	struct dugum *sonraptr;
	
	yeniptr = (struct dugum *)malloc( sizeof(struct dugum) );
	
	if (yeniptr != NULL){
		yeniptr->yas = yas;
		yeniptr->ptr = NULL;
		
		onceptr = NULL;
		sonraptr = *p;
		
		while(sonraptr != NULL && yas > sonraptr->yas){
			onceptr = sonraptr;
			sonraptr = sonraptr->ptr;
		}
		if( onceptr == NULL){
			yeniptr->ptr = *p;
			*p = yeniptr;
			return yas;
		}
		else{
			onceptr->ptr = yeniptr;
			yeniptr->ptr = sonraptr;
			return yas;
		}
	}
	else
		return 0;
}
int listesay( struct dugum *p)
{
	int i = 0;
	if (p == NULL)
		return 0;
	else {
		while( p != NULL){
			i++;
			p = p->ptr;
		}
		return i;
	}
}