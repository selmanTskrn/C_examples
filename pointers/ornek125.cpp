#include <stdio.h>

void cevir( int *, int *, int *, int *, char, int);

int main()
{
	int sayi1, sayi2, sayi3, sayi4;
	int kackere;
	char yon = 'D';
	
	printf("4 adet tamsayi giriniz : ");
	scanf("%d%d%d%d", &sayi1, &sayi2, &sayi3, &sayi4);
	
	printf("Cevirme yonu (saat yonu-D tersi icin-T) : ");
	scanf(" %c",&yon);
	
	printf("Girilen yonde kac kere cevrilecek : ");
	scanf("%d", &kackere);
	
	printf("Sayilarin cevrilmeden onceki halleri :\n");
	printf("a	b	c	d \n");
	printf("%d	%d	%d	%d", sayi1, sayi2, sayi3, sayi4);
	
	cevir( &sayi1, &sayi2, &sayi3, &sayi4, yon, kackere);
	
	printf("\nSayilarin cevrildikten sonraki halleri :\n");
	printf("a	b	c	d\n%d	%d	%d	%d", sayi1, sayi2, sayi3, sayi4);
	
	
}
void cevir( int *sayi1p, int *sayi2p, int *sayi3p, int *sayi4p, char yon, int n)
{
	int yedek ;
	switch (yon){
		case 'D':
			while ( n!=0 ){
				yedek = *sayi4p;
				*sayi4p = *sayi3p;
				*sayi3p = *sayi2p;
				*sayi2p = *sayi1p;
				*sayi1p = yedek;
				n--;
			}
			break;
		case 'T':
			while ( n!=0 ){
				yedek = *sayi1p;
				*sayi1p = *sayi2p;
				*sayi2p = *sayi3p;
				*sayi3p = *sayi4p;
				*sayi4p = yedek;
				n--;
			}
			break;
		default:
			printf("Yanlis yon girdiniz !!!");
	}
}