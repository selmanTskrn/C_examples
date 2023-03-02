#include <stdio.h>

int main()
{
	int kir=0 , ysl=0 , sar=0 , syh = 0 , kod = 0 ;
	  
	
	do {
		printf("Kod giriniz (1,2,3,4 ya da cikmak icin 111): ");
		scanf("%d", &kod);
		
		if ( kod == 1)
			kir++;
		else if ( kod == 2 )
			ysl++ ;
		else if ( kod == 3 )
			sar++ ;
		else if ( kod == 4 )
			syh++ ;
		else if (kod != 111)
			printf("Hata!! Lutfen gecerli bir kod giriniz \n");
			
	}while ( kod != 111 );
	printf("Gun Sonu Satis Raporu : \n%d Kirmizi %d Yesil %d Sari %d Siyah oje satilmistir.", kir, ysl, sar, syh);
	return 0;
}