#include <stdio.h>

void say( int *, int, int *, int *, int *);

int main()
{
	int dizi[] = {-1,2,4,6,0,-2,0};
	int nSay, pSay, sSay;
	
	say( dizi, 7, &nSay, &pSay, &sSay);
	
	printf("Negatif Sayisi = %d\n"
	"Pozitif Sayisi = %d\n"
	"Sifir Sayisi = %d", nSay, pSay, sSay);
	return 0;
}
void say( int *dizip, int n, int *negp, int *pozp, int *sfrp)
{
	int i;
	
	*negp = 0;
	*pozp = 0;
	*sfrp = 0;
	
	for ( i=0 ; i<n ; i++)
	{
		if (*(dizip+i)<0 )
			*negp += 1;
		else if (*(dizip+i)>0 )
			*pozp += 1;
		else
			*sfrp += 1;
	}

}