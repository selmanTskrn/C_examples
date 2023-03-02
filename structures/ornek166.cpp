#include <stdio.h>
#include <math.h>
typedef struct zaman{
	int saat;
	int dak;
	int san;
} Zaman;
Zaman farkbul( struct zaman, struct zaman);
int main()
{
	Zaman a1;
	Zaman a2;
	Zaman sonuc;
	
	printf("Birinci zamani giriniz : ");
	scanf("%d%d%d", &a1.saat, &a1.dak, &a1.san);
	printf("Ikinci zamani giriniz : ");
	scanf("%d%d%d", &a2.saat, &a2.dak, &a2.san);
	
	sonuc = farkbul ( a1, a2 );
	printf("\nIkisi arasindaki fark : %d saat %d dakika %d saniye", sonuc.saat, sonuc.dak, sonuc.san);
	return 0;
}
Zaman farkbul( struct zaman a1, struct zaman a2)
{
	Zaman sonuc;
	int a1Toplam;
	int a2Toplam;
	int fark;
	
	a1Toplam = (a1.saat)*3600 + (a1.dak)*60 + (a1.san);
	a2Toplam = (a2.saat)*3600 + (a2.dak)*60 + (a2.san);
	fark = fabs(a1Toplam-a2Toplam);
	sonuc.saat = fark / 3600;
	fark = fark - 3600*(sonuc.saat);
	sonuc.dak = fark / 60;
	fark = fark - 60*(sonuc.dak);
	sonuc.san = fark;
	return sonuc;
}