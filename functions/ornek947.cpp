#include <stdio.h>
int ortanca (int , int , int );
int main()
{
	printf("\n%d", ortanca(1, 7, 9));
}
int ortanca (int a1, int a2, int a3)
{
	if ( a1 < a2 ){
		a1 = a1 + a2;
		a2 = a1 - a2;
		a1 = a1 - a2;
	}
	if ( a2 < a3 ){
		a2 = a2 + a3;
		a3 = a2 - a3;
		a2 = a2 - a3;
	}
	if ( a1 < a2 ){
		a1 = a1 + a2;
		a2 = a1 - a2;
		a1 = a1 - a2;
	}
	return a2;
}