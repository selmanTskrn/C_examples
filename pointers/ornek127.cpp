#include <stdio.h>

void ayristir( int, int *, int *, int *);

int main()
{
	int toplam_gun;
	int yil;
	int ay;
	int gun ;
	
	printf("Gun sayisini giriniz : ");
	scanf("%d", &toplam_gun);
	
	ayristir( toplam_gun, &yil, &ay, &gun); 
	
	printf("-----------------------\n");
	printf("Bu sure %d yil , %d ay, %d gun eder", yil, ay, gun);
	return 0;
}
void ayristir( int toplam, int *yilp, int *ayp, int *gunp)
{
	*yilp = toplam / 365;
	toplam -= *yilp * 365;
	
	*ayp = toplam / 30;
	toplam -= *ayp * 30;
	
	*gunp = toplam;
}