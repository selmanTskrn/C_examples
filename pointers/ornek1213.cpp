#include <stdio.h>

void kodCoz( int, char *, char *, int *);

int main()
{
	int kod_num;
	char boyut;
	char cinsiyet;
	int renk_kodu;
	
	printf("Urun kod numarasini giriniz : ");
	scanf("%d", &kod_num);
	
	kodCoz( kod_num, &boyut, &cinsiyet, &renk_kodu);
	
	printf("--------------------\n"
	"Bu urunun boyutu : %c, Cinsiyet : %c, renk kodu : %d", boyut, cinsiyet, renk_kodu);
	return 0;
}
void kodCoz( int num, char *boyutp, char *cinsp, int *renkp)
{
	*renkp = num%1000;
	num /= 1000;
	
	if ( num%10 == 1 )
		*cinsp = 'E';
	else if ( num%10 == 2)
		*cinsp = 'K';
	num /= 10;
	
	if ( num == 1)
		*boyutp = 'S';
	else if ( num == 2)
		*boyutp = 'M';
	else if ( num == 3)
		*boyutp = 'L';
	else if ( num == 4)
		*boyutp = 'X';
}