#include <stdio.h>

void buyukbul( int, int, int, int, int *, int *);

int main()
{
	int pay1 = 2, payda1 = 5, pay2 = 1, payda2 = 3;
	int buyukPay, buyukPayda;
	buyukbul( pay1, payda1, pay2, payda2, &buyukPay, &buyukPayda);
	printf("Buyuk = %d / %d", buyukPay, buyukPayda);
	
}
void buyukbul( int p1, int pd1, int p2, int pd2, int *payp, int *paydap)
{
	if ( p1*pd2 < p2*pd1){
		*payp = p2;
		*paydap = pd2;
	}
	else {
		*payp = p1;
		*paydap = pd1;
	}
}