#include <stdio.h>
#include <locale.h>

#define N 6
#define M 5

int main()
{
	setlocale(LC_ALL, "Turkish");
	int kart[N][M] = {
		{'A','J','K','P','Ü'},
		{'B','İ','L','R','V'},
		{'C','I','M','S','Y'},
		{'Ç','H','N','Ş','Z'},
		{'D','G','O','T','.'},
		{'E','F','Ö','U','?'}};
		
	int mesaj[10];
	int i, j, k, l;
	
	printf("Sifreli measjin sayilarini giriniz (10 adet) : ");
	for ( i=0 ; i<10 ; i++)
	{
		scanf("%d", &mesaj[i]);
		
	}
	printf("Gercek mesaj : ");
	for ( i=0 ; i<10 ; i++)
	{
		k = mesaj[i]/10 - 1;
		l = mesaj[i]%10 - 1;
		printf("%c", kart[k][l]);
	}
}