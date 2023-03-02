#include <stdio.h>

void yavruSayisiCinsiyetiBul(float, int, char *, int *);

int main()
{
	float derece;
	int yumurta_num;
	char cinsiyet;
	int yavru_num;
	
	printf("Kulucka sicakligini giriniz (C) : ");
	scanf("%f", &derece);
	
	printf("Yumurta sayisini giriniz : ");
	scanf("%d", &yumurta_num);
	
	yavruSayisiCinsiyetiBul( derece, yumurta_num, &cinsiyet, &yavru_num);
	
	printf("--------------------\n"
	"Cikacak yavrularin cinsiyeti (D:disi, E:erkek) : %c\n"
	"Cikacak yavru sayisi : %d", cinsiyet, yavru_num);
	return 0;
}
void yavruSayisiCinsiyetiBul( float derece, int yum_num, char *cinsp, int *yavrup)
{
	if ( 28<=derece && derece<31)
		*cinsp = 'D';
	else if ( 31<=derece && derece<=34)
		*cinsp = 'E';
	*yavrup = yum_num - yum_num/10;
}