#include <stdio.h>

void guncelle( int *, int *, int *, int);

int main()
{
	int saat;
	int dakika;
	int saniye;
	int ekleme;
	
	printf("Zamani giriniz (saat, dakika, saniye) : ");
	scanf("%d%d%d", &saat, &dakika, &saniye);
	
	printf("Eklenecek zamani giriniz : ");
	scanf("%d", &ekleme);

	guncelle( &saat, &dakika, &saniye, ekleme);
	
	printf("Yeni zaman =  %d : %d : %d", saat, dakika, saniye);
	return 0;
}
void guncelle( int *saatp, int *dakp, int *sanp, int ekleme)
{
	int zaman;
	
	zaman = *saatp * 3600 + *dakp * 60 + *sanp + ekleme;
	
	*saatp = zaman/3600;
	zaman -= *saatp * 3600;
	
	*dakp = zaman/60;
	zaman -= *dakp * 60;
	
	*sanp = zaman;
}