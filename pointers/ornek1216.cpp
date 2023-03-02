#include <stdio.h>

void aracKoltukSayisiBulma( int, int *, int *);

int main()
{
	int kisi_sayisi;
	int otobus;
	int bos_koltuk;
	
	printf("Tura katilacak kisi sayisi : ");
	scanf("%d", &kisi_sayisi);
	
	aracKoltukSayisiBulma( kisi_sayisi, &otobus, &bos_koltuk);
	
	printf("--------------------\n"
	"Bu tur icin %d adet otobuse ihtiyac var\n"
	"Turdaki bos koltuk sayisi : %d", otobus, bos_koltuk);
	return 0;
}
void aracKoltukSayisiBulma( int kisi, int *otoptr, int *bosptr)
{
	*otoptr = kisi / 46 + 1;
	*bosptr = *otoptr * 46 - kisi;
}