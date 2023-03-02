#include <stdio.h>
int rakamsay( int );
int main()
{
	printf("%d\n", rakamsay( 123124 ));
	printf("%d\n", rakamsay( 34723435 ));
}
int rakamsay( int a )
{
	int i;
	for ( i = 0 ; a != 0 ; i++ ){
		a /= 10;
	}
	return i;
}