#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void noktaBul (int x1, int y1, int x2, int y2);
int main()
{
	noktaBul (-2, 3, 2, -2);
	return 0;
	
}
void noktaBul (int x1, int y1, int x2, int y2)
{
	int nok1, nok2;
	srand(time(0));
	
	nok1 = rand()%(x1-x2) + 1;
	if( x1<x2 )
		nok1 += x1;
	else 
		nok1 += x2;
	
	nok2 = rand()%(y1-y2) + 1 ;
	if( y1<y2 )
		nok2 += y1;
	else 
		nok2 += y2;
	
	printf("Nokta = (%d, %d)", nok1, nok2);
}