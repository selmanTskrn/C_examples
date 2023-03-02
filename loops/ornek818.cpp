#include <stdio.h>

int main()
{
	int sayi ;
	int sayac ;
	int adet=1 ;
	
	printf("5 adet sayi giriniz = ");

	
	while ( adet <= 5){
		scanf("%d", &sayi);
		for (sayac = 1 ; sayac<=sayi; sayac++){
			printf("*");
		}
		printf("\n");
		adet++;
	}
		
	return 0;
}