#include <stdio.h>

int main()
{
	int adet;
	int yas;
	float toplam = 0;
	
	printf("Ailedeki kisi sayisi : \n");
	scanf("%d", &adet);
	printf("%d kisinin yaslarini giriniz : \n", adet);
	
	for ( int i = 1 ; i <= adet ; i++){
		scanf("%d", &yas);
		
		if ( 1<=yas && yas<=10)
			toplam = toplam + 1 ;
		else if ( yas>10 && yas<=17 )
			toplam = toplam + 1.5 ;
		else if ( yas>17 && yas<=26 )
			toplam = toplam + 4.75 ;
		else if ( yas>26 && yas<=50 )
			toplam = toplam + 7 ;
		else if ( yas>50 && yas<=100 )
			toplam = toplam + 5.25 ;
		else 
			printf("Yanlis yas degeri !!\n");
		
	}
	printf("Odenecek toplam tutar %.2f", toplam);
	return 0 ;
}