#include <stdio.h>

int main ()
{
	int sayi;
	int adet = 0 ;
	int cift = 0 ;
	int tek = 0 ;
	
	
	printf("Sayi : ");
	scanf("%d", &sayi);
	
	while (sayi == sayi % 100){
		if ( sayi == sayi%10 ){
			tek++ ;
		}
		else {
			cift++ ;
		}
		adet++ ;
		printf("Sayi : ");
		scanf("%d", &sayi);	
	}
	printf("\nGirilen %d sayinin %d tanesi cift basamakli, %d tanesi tek basamakli", adet, cift, tek);
	return 0;
}