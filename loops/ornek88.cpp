#include <stdio.h>

int main ()
{
	int i = 1986;
	int sayac = 1 ;
	int adet = 0 ;
	
	printf("Halley yildizinin gorulebilecegi yillar : ");
	
	while ( sayac <= 20 ){
		printf("%d,", i);
		sayac = sayac + 1;
		i = i+75;
		if ( i < 3000 && i >= 2000)
			adet = adet + 1;
	}
	
	printf("\nHalley yildizi 2000'li yillarda %d kez gorulebilir", adet);
	return 0;
}
      