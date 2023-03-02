#include <stdio.h>
#include <math.h>
int icindemi( int , int , int , int , int);
int main()
{
	int x, y, x1, y1, r;
	
	printf("Noktanin degerleri : ");
	scanf("%d%d", &x, &y);
	printf("Cember merkezi : ");
	scanf("%d%d", &x1, &y1);
	printf("Cember yaricapi : ");
	scanf("%d", &r);
	
	printf("%d\n", icindemi(x,y,x1,y1,r));
}
int icindemi( int x, int y, int x1, int y1, int r)
{
	int a;
	a = pow(x-x1,2) + pow (y-y1, 2);
	if ( sqrt( a ) < r )
		return 1;
	else 
		return 0;
}