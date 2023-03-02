#include <stdio.h>
#include <math.h>

void hangiUcaDahaYakin( float, float, float, float, float *, float *);

int main()
{
	float x1=0.0, y1=4.0, x2=3.0, y2=0.0;
	float x, y;
	
	hangiUcaDahaYakin( x1, y1, x2, y2, &x, &y);
	
	printf("Orijine daha yakin olan nokta x=%.1f, y=%.1f", x, y);
	return 0;
}
void hangiUcaDahaYakin( float x1, float y1, float x2, float y2, float *xp, float *yp)
{
	if (sqrt(pow(x1-0.0 , 2)+pow(y1-0.0 , 2)) < sqrt(pow(x2-0.0 , 2)+pow(y2-0.0 , 2))){
		*xp = x1;
		*yp = y1;
	}
	else {
		*xp = x2;
		*yp = y2;
	}
}
