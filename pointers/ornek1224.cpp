#include <stdio.h>

void permutasyonKombinasyon( int, int, double *, double *);

int main()
{
	int n = 3, r = 2;
	double p, c;
	
	permutasyonKombinasyon( n, r, &p, &c);
	
	printf("Permutasyon = %.1f\n"
	"Kombinasyon = %.1f", p, c);
	
	return 0;
}
void permutasyonKombinasyon( int n, int r, double *pptr, double *cptr)
{
	int i;
	int fak1 = 1;
	int fak2 = 1;
	
	for ( i=1 ; i<=n ; i++){
		fak1 *= i;
	}
	for ( i=1 ; i<=n-r ; i++)
		fak2 *= i;
	
	*pptr = fak1/fak2;
	
	fak1 = 1;
	for ( i=1 ; i<=r ; i++)
		fak1 *= i;
	
	*cptr = *pptr/fak1;
}