#include <stdio.h>

void enYasliKomsuyuBul( int *, int *, int *);

int main()
{
	int daireler[10] = {1980, 1962, 1968, 1962, 
	1980, 1962, 1982, 1949,
	1976, 1952};
	
	int enYasli;
	int komsu;
	
	enYasliKomsuyuBul( daireler, &enYasli, &komsu);
	
	printf("En yasli %d nolu daire\n", enYasli);
	printf("Onun kat komsusu %d nolu daire", komsu);
	return 0;
}
void enYasliKomsuyuBul( int *dizip, int *enYaslip, int *komsup)
{
	int i, enYas;
	
	enYas = *dizip;
	*enYaslip = 1;
	*komsup = 2;
	
	for ( i=0 ; i<10 ; i++)
	{
		if ( *(dizip+i) < enYas ){
			*enYaslip = i + 1;
			enYas = *(dizip+i);
		}
	}
	if (*enYaslip%2==0)
		*komsup = *enYaslip - 1;
	if (*enYaslip%2==1)
		*komsup = *enYaslip + 1;
}