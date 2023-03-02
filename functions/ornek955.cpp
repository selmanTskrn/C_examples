#include <stdio.h>
#include <math.h>
float kucukAci( int , int );
int main()
{
	float c;
	
	c = kucukAci( 3 , 11 );
	printf("\n%.1f", c );
}
float kucukAci( int x , int y )
{
	float x1, y1;
	
	y1 = y * 6;
	x1 = y1/12 + x * 30;
	return fabs(x1 - y1);
}
