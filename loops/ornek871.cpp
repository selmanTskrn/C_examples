#include <stdio.h>

int main()
{
	int i;
	float carpim=1, olasilik;
	
	printf("Kisi sayisini giriniz : ");
	scanf("%d", &i);
	
	for ( int l=1 ; l<=i ; l++){
		carpim= carpim * (367-l)/366;
		
	}
	olasilik = 1- carpim;
	printf("olasilik = %f", olasilik);
	return 0;
}