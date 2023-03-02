#include <stdio.h>
int rakamtopla( int );
int main()
{
	printf("%d\n", rakamtopla( 123985 ));
	printf("%d\n", rakamtopla( 13129845 ));
}
int rakamtopla( int a )
{
	int toplam = 0;
	while ( a != 0 ){
		toplam = toplam + a%10;
		a /= 10;
	}
	return toplam;
}