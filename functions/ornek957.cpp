#include <stdio.h>
#include <math.h>
int obeb ( int , int );
int main()
{
	printf("%d", obeb(64,32));
	return 0;
}
int obeb ( int a, int b)
{
	while ( a != b ){
		if ( a < b )
			b = fabs(a-b);
		else if ( a > b )
			a = fabs(a-b);
	}
	return a;
}