#include <stdio.h>

void f(int *, int *);
void f2(int *, int );

int main()
{
	int x,y ;
	f( &x, &y);
	printf("x = %d\n y = %d \n", x, y);
	return 0;
}
void f2(int *p, int y)
{
	int x;
	x = 14;
	*p = 2 * x - y;
}

void f( int *x, int *y)
{
	f2( x, 5);
	f2( y, *x);
}