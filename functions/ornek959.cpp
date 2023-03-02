#include <stdio.h>
int uckenar( int , int , int);
int main()
{
	int kenar1, kenar2, kenar3;
	printf("kenar uzunluklarini giriniz : ");
	scanf("%d%d%d", &kenar1, &kenar2, &kenar3);
	
	printf("%d", uckenar(kenar1, kenar2, kenar3));
}
int uckenar( int a, int b, int c)
{
	if ( a+b > c && a+c > b && b+c > a )
		return 1;
	else 
		return 0;
}