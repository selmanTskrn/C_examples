#include <stdio.h>
void ayristir(int a);

int main()
{
	ayristir (7310);
	return 0;
}
void ayristir(int a)
{
	int saat, dakika, saniye;
	saat = a/3600;
	dakika = (a-saat*3600)/60;
	saniye = a%60;
	
	if(saat>0)
		printf("%d saat ", saat);
	if(dakika>0)
		printf("%d dakika ", dakika);
	if(saniye>0)
		printf("%d saniye", saniye);

}