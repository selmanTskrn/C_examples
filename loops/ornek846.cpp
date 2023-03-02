#include <stdio.h>

int main ()
{
	int harfAdedi=0, adetA=0, adetB=0, adetC=0, adetF=0;
	char tip;
	float top=0;
	
	
	
	do {
		printf("Harf notunu giriniz (Cikis icin H ya da h giriniz) : ");
		scanf("%s", &tip);
		
		switch (tip){
			case 'A':
				adetA++;
				top=top+4.0;
				break;
			case 'B':
				adetB++;
				top=top+3.0;
				break;
			case 'C':
				adetC++;
				top=top+2.0;
				break;
			case 'F':
				adetF++;
				break;
			default:
				printf("Gecersiz not !!!!\n");
				harfAdedi--;
		}
		harfAdedi++;
		
	} while ( tip != 'H' && tip != 'h' );
	
	printf("\nGirilen A larin sayisi : %d", adetA);
	printf("\nGirilen B lerin sayisi : %d", adetB);
	printf("\nGirilen C lerin sayisi : %d", adetC);
	printf("\nGirilen F lerin sayisi : %d", adetF);
	printf("\nToplam harf sayisi : %d", harfAdedi);
	printf("\nOrtalama : %.2f", top/harfAdedi);
	return 0 ;
}