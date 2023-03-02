#include <stdio.h>

int main()
{
	int n, i;
	int enBuyuk;
	
	printf("Personel sayisini giriniz : ");
	scanf("%d", &n);
	
	int sicil[n], satis[n];
	for ( i=0 ; i<n ; i++){
		printf("%d. personelin sicili ve satis miktari : ", i+1);
		scanf("%d %d", &sicil[i], &satis[i]);
	}
	enBuyuk = 0;
	for ( i=1 ; i<n ; i++){
		if ( satis[i]>satis[enBuyuk] )
			enBuyuk = i;
	}
	printf("\n\nPersonel ne kadar satis yapacak\n");
	printf("Sicil	: ");
	for ( i=0 ; i<n ; i++)
		printf("%d	", sicil[i]);
	printf("\nSatis	: ");
	for ( i=0 ; i<n ; i++)
		printf("%d	", satis[enBuyuk]-satis[i]);
	return 0;
	
}