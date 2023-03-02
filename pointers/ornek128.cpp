#include <stdio.h>

void haftaGunSaatBul( int, int *, int *, int *);

int main()
{
	int toplam_saat;
	int hafta;
	int gun;
	int saat;
	
	printf("Sureyi giriniz (saat) : ");
	scanf("%d", &toplam_saat);
	
	haftaGunSaatBul( toplam_saat, &hafta, &gun, &saat);
	
	printf("------------------------\n");
	printf("Girilen sure : %d Hafta, %d Gun, %d Saat", hafta, gun, saat);
	return 0;
}
void haftaGunSaatBul( int sure, int *haftap, int *gunp, int *saatp)
{
	*haftap = sure / 168;
	sure -= *haftap * 168;
	
	*gunp = sure / 24;
	sure -= *gunp * 24;
	
	*saatp = sure;
}