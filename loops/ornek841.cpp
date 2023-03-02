#include <stdio.h>

int main ()
{
	int sayi, toplam=0 ;
	
	printf("Sayiyi giriniz : ");
	scanf("%d", &sayi);
	
	for ( int i=sayi-1 ; i>0 ; i-- ){
		if (sayi%i==0){
			toplam = toplam + i ;
		}
	}
	if ( sayi<toplam )
		printf("Girilen sayi bol sayidir");
	else 
		printf("Girilen sayi bol sayi degildir");	
	return 0;
}