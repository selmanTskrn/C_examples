#include <stdio.h>
#include <math.h>

float noktakaydir( float *, float *, int, int);

int main()
{
	float x = 2.5, y = 2.5, msf;
	int yatay = 5, dusey = 4;
	
	msf = noktakaydir( &x, &y, yatay, dusey);
	
	printf("%.2f, %.2f, %.2f", x, y, msf);
	return 0;
}
float noktakaydir( float *xp, float *yp, int yat, int dus)
{
	*xp += yat;
	*yp += dus;
	
	return sqrt(yat*yat + dus*dus);
}