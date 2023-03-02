#include <stdio.h>

int main ()
{
	int i ;
	int toplam = 0;
	char tip ;
	
	printf("Maymunun cinsiyetini giriniz (Erkek: E-e / Disi: D-d) : ");
	scanf("%c", &tip);
	printf("Maymun kafese kac defa girdi : ");
	scanf("%d", &i);
	
	switch (tip) {
		case 'd':
		case 'D':
			for ( int sy = 1; sy <5 && sy <= i ; sy++){
					toplam = toplam + sy ;
					printf("%d. girisinde toplamda %d muz yedi\n", sy, toplam);
				}
			for ( int sy = 5; i >= 5 && sy <= i ; sy++){
					toplam = toplam + ((toplam-sy)/2 + 1)   ;
					printf("%d. girisinde toplamda %d muz yedi\n", sy, toplam);
				}
			break;
		case 'e':
		case 'E':
			for ( int sy = 1; sy <5 && sy <= i ; sy++){
					toplam = toplam + sy  ;
					printf("%d. girisinde toplamda %d muz yedi\n", sy, toplam*2);
				}
			for ( int sy = 5; i >= 5 && sy <= i ; sy++){
					toplam = toplam + ((toplam-sy)/2 + 1)   ;
					printf("%d. girisinde toplamda %d muz yedi\n", sy, toplam*2);
				}
			break;
		default :
			printf("yanlis deger girdiniz");
	}
	
	return 0;
}