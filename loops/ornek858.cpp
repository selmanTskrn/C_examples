#include <stdio.h>

int main()
{
	int kilo, sporcu=0, hafif=0, orta=0, agir=0 ;
	float toplam=0;

	printf("Kilo giriniz : ");
	scanf("%d", &kilo);

	while ( kilo != 0 ) {
		
		while ( kilo < 0 ){
			printf("Yanlis kilo girdiniz \nKilo giriniz : ");
			scanf("%d", &kilo);
		}
	
		if (kilo<50) 
			hafif++;
		else if (kilo<70)
			orta++;
		else 
			agir++;
		toplam = toplam + kilo;
		sporcu++;
		
		printf("Kilo giriniz : ");
		scanf("%d", &kilo);
	}
	
	printf("Toplam %d adet sporcu girilmistir \n%d hafif, %d orta, %d agir siklet vardir"
	"\nGenel ortalama : %.2f",sporcu ,hafif, orta, agir, toplam/sporcu);

	return 0;
}