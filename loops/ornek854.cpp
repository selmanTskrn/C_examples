#include <stdio.h>

int main()
{
	int sy , sayi ;
	float toplam = 1 ;
	
	printf("Deger giriniz : ");
	scanf("%d", &sayi);
	
	
	for (sy=2 ; sy<=sayi ; sy++){
		toplam = 1 + 1/toplam ;
		
	}
	
	printf("%f", toplam);

	return 0;
}