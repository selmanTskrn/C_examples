#include <stdio.h>

void otele(float *, float *, float *, float *, float, float, float, float);

int main()
{
	float aX1 = 2.0, aY1 = 4.0, aX2 = 4.0, aY2 = 2.0;
	float bX1 = 6.0, bY1 = 10.0, bX2 = 10.0, bY2 = 6.0;
	
	otele( &aX1, &aY1, &aX2, &aY2, bX1, bY1, bX2, bY2);
	
	printf("aX1 = %.1f, aY1 = %.1f, aX2 = %.1f, aY2 = %.1f",
	aX1, aY1, aX2, aY2);
	return 0;
}
void otele(float *ax1p, float *ay1p, float *ax2p, float *ay2p, float bx1, float by1, float bx2, float by2)
{
	bx1 = (bx1 + bx2 - *ax1p - *ax2p)/2.0;
	by1 = (by1 + by2 - *ay1p - *ay2p)/2.0;
	
	*ax1p += bx1;
	*ax2p += bx1;
	*ay1p += by1;
	*ay2p += by1; 
}