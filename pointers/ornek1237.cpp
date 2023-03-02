#include <stdio.h>

void kucukleriBul( int *, int *, int *, int *, int *);

int main()
{
	int dizi[10];
	int i, enKucuk, enKucukind, enKucuk2, enKucuk2ind;
	
	printf("Dizinin elemanlarini giriniz :	");
	for ( i=0 ; i<10 ; i++)
		scanf("%d", &dizi[i]);
	
	kucukleriBul( dizi, &enKucuk, &enKucukind, &enKucuk2, &enKucuk2ind);
	
	printf("-----------------------\n"
	"En kucuk eleman %d nolu indisde bulunan %d\n"
	"En kucuk ikinci eleman %d nolu indisde bulunan %d", enKucukind, enKucuk, enKucuk2ind, enKucuk2);
	
	return 0;
}
void kucukleriBul( int *dizip, int *enKucukp , int *enKucukindp, int *enKucuk2p, int *enKucuk2indp)
{
	int i;
	
	*enKucukp = *enKucuk2p = *dizip;
	
	for ( i=1 ; i<10 ; i++)
	{
		if ( *(dizip+i) < *enKucukp ){
			*enKucukp = *(dizip+i);
			*enKucukindp = i;
		}
		else if ( *(dizip+i) < *enKucuk2p ){
			*enKucuk2p = *(dizip+i);
			*enKucuk2indp = i;
		}
	}
}