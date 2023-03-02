#include <stdio.h>
#include <stdlib.h>

int main()
{
	char s[10];
	int k, i, toplam = 0;
	
	puts("4 adet tamsayi icerikli dizgi giriniz : ");
	for ( i=0 ; i<4 ; i++){
		scanf("%s", s);
		k = atoi( s );
		toplam += k;
	}
	printf("Girdiginiz sayilarin toplami : %d dir", toplam);
	return 0;
}