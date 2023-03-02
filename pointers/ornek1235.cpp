#include <stdio.h>

void cevir( int *);

int main()
{
	int dizi[10];
	int i;
	
	printf("Dizinin elemanlari :\n");
	for ( i=0 ; i<10 ; i++)
		scanf("%d", &dizi[i]);
	
	cevir( dizi);
	
	printf("Dizinin ters cevrilmis hali : \n");
	for ( i=0 ; i<10 ; i++)
		printf("%d ", dizi[i]);
	return 0;
}
void cevir( int *dizip)
{
	int i, yedek;
	
	for ( i=0 ; i<5 ; i++){
		yedek = *(dizip+i);
		*(dizip+i) = *(dizip+9-i);
		*(dizip+9-i) = yedek;
	}
}