#include <stdio.h>

int main()
{
	int i, j, kule=0, toplam=0;
	
	printf("Iki adet sifirdan farkli buyuk tamsayi giriniz: ");
	scanf("%d%d", &i, &j);
	
	while (i<=0 || j<=0){
		printf("Hata!! sayilar sifirdan buyuk olmali"
		"\nIki adet sifirdan farkli buyuk tamsayi giriniz: ");
		scanf("%d%d", &i, &j);
	}
	while ( i>=1 ){
		
		if (i%2==1){
			toplam=toplam+j;
		}
		i=i/2;
		j=j*2;
		kule++;
		
	}
	printf("Carpim kulesi ile hesaplanan sonuc = %d", toplam);
	printf("\nKule yuksekligi = %d", kule);
	return 0;
}