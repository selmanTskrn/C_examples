#include <stdio.h>

void yumurtaSayisiSicakligiBul( char, int, int *, int *, int *);
int main()
{
	char cinsiyet;
	int yavru;
	int alt, ust;
	int yumurta;
	
	printf("Istenen yavrularin cinsiyetini giriniz (D)isi - (E)rkek : ");
	scanf("%c", &cinsiyet);
	
	printf("Cikmasini istediginiz yavru sayisini giriniz = ");
	scanf("%d", &yavru);
	
	yumurtaSayisiSicakligiBul(cinsiyet, yavru, &alt, &ust, &yumurta);
	
	printf("------------------------------\n"
	"Kulucka sicakligi (alt ust C) : %d oC - %d oC\n"
	"Kuluckaya konacak yumurta sayisi : %d", alt, ust, yumurta);
	
	return 0;
}
void  yumurtaSayisiSicakligiBul( char cins, int yavru, int *altp, int *ustp, int *yump)
{
	switch (cins) {
		case 'D':
			*altp = 33;
			*ustp = 34;
			break;
		case 'E':
			*altp = 28;
			*ustp = 31;
			break;
	}
	
	*yump = yavru*10/9;
}