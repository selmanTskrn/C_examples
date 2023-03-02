#include <stdio.h>

void sirala( double *, double *, double *);

int main()
{
	double a = 3.14, b = 4.56, c = 2.1;
	
	sirala( &a, &b, &c);
	printf("Sirali :\n%.2f, %.2f, %.2f", a, b, c);
	return 0;
}
void sirala( double *ap, double *bp, double *cp)
{
	double yedek;
	
	if (*ap > *bp){
		yedek = *ap;
		*ap = *bp;
		*bp = yedek;
	}
	if (*bp > *cp){
		yedek = *bp;
		*bp = *cp;
		*cp = yedek;
	}
	if (*ap > *bp){
		yedek = *ap;
		*ap = *bp;
		*bp = yedek;
	}
}