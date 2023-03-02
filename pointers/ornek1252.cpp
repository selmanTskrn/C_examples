#include <stdio.h>

void enCokYakitVeKomsuBul( float *, int *, float *);

int main()
{
	float daireYakitGider[10] = {350.04, 351, 450.50, 90.2, 180, 162, 382, 349, 761.50, 452.50};
	int enCok;
	float fark;
	
	enCokYakitVeKomsuBul( daireYakitGider, &enCok, &fark);
	
	printf("En cok yakit gideri %d numara\n", enCok);
	printf("Komsusu ile gider farki : %.2f TL", fark);
	return 0;
}
void enCokYakitVeKomsuBul( float *dizip, int *enCokp, float *farkp)
{
	int i, komsu;
	float enCokHarcama;
	
	*enCokp = 1;
	enCokHarcama = *dizip;
	
	for ( i=1 ; i<10 ; i++)
	{
		if ( *(dizip+i) > enCokHarcama){
			enCokHarcama = *(dizip+i);
			*enCokp = i + 1;
			if ( *enCokp%2==0 )
				komsu = *enCokp - 1;
			else
				komsu = *enCokp + 1;
			
		}
	}
	*farkp = *(dizip + *enCokp - 1) - *(dizip + komsu-1);
}