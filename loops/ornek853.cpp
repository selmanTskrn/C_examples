#include <stdio.h>

int main()
{
	int sayi1, sayi2;
	
	printf("Baslangic sayisi giriniz : ");
	scanf("%d", &sayi1);
	
	printf("Bir sayi giriniz (bir onceki sayiyi girerseniz durur) : ");
	scanf("%d", &sayi2);

	do {
		if(sayi1>sayi2)
			printf("AZALIYOR");
		else 
			printf("ARTIYOR");
		
		sayi1=sayi2;
		
		
		printf("\nBir sayi giriniz (bir onceki sayiyi girerseniz durur) : ");
		scanf("%d", &sayi2);
		
	}while ( sayi1 != sayi2 );
	return 0;
}	