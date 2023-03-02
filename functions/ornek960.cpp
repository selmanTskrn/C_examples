#include <stdio.h>
int kontrol ( int , int );
int main ()
{
	int sayi1, sayi2;
	
	printf("sayilari giriniz : ");
	scanf("%d%d", &sayi1, &sayi2);
	
	printf("%d", kontrol(sayi1, sayi2));
}
int kontrol (int a, int b)
{
	int a1 = 0, b1 = 0;
	for ( int i = a-1 ; 0<i ; i--){
		if ( a%i == 0)
			a1 += i;
	}
	for ( int i = b-1 ; 0<i ; i--){
		if ( b%i == 0)
			b1 += i;
	}
	if( b1 == a && a1 == b)
		return 1;
	else 
		return 0;
}