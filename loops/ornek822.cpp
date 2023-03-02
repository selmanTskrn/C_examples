#include <stdio.h>

int main ()
{
	int kod = 0;
	float toplam = 0;
	printf("Kalemlerin urun kodlarini girin (durdurmak icin 111) : ");
	
	while ( kod != 111){
		scanf("%d", &kod);
		if ( kod == 11 )
			toplam = toplam + 1.5;
		else if ( kod == 12 )
			toplam = toplam + 2.5;
		else if ( kod == 13 )
			toplam = toplam + 3;
		else if ( kod == 14 )
			toplam = toplam + 4.5;
		else if ( kod == 15 )
			toplam = toplam + 5;
		else if ( kod != 111){
			printf("yanlis kod !! tekrar kod girin (durdurmak icin 111) ");
		
		}
			
	}
	printf("Gun sonu satis kazanci : %.2f", toplam);
	return 0;
}