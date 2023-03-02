#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void icindeNoktaBul( int, int, int, int *, int *);

int main()
{
	int mx=2, my=5, r=6;
	int x, y;
	icindeNoktaBul( mx, my, r, &x, &y);
	
	printf(" x,y = %d,%d", x, y);
}
void icindeNoktaBul( int mx, int my, int r, int *xp, int *yp)
{
	int test;
	srand(time(NULL));
	
	do {
		*xp = rand()%(2*r + 1) - r + mx;
		*yp = rand()%(2*r + 1) - r + my;
	
		if ( sqrt(pow(*xp - mx, 2) + pow(*yp - my, 2)) > r)
			test = 1;
		else
			test = 0;
		
	} while (test == 1);
}