#include <stdio.h>
#include <math.h>
typedef struct cember{
	int x;
	int y;
	float yaricap;
}Cember;
void yutaniBul( Cember, Cember, Cember *);
int main()
{
	Cember a = {10, 8, 4.0}, b = {15, 10, 13.0}, c;
	
	yutaniBul( a, b, &c);
	printf("x = %d\ny = %d\nyaricap = %.2f", c.x, c.y, c.yaricap);
	return 0;
}
void yutaniBul( Cember a, Cember b, Cember *cptr)
{
	float uzaklik;
	Cember ufak = a, buyuk = b;
	
	if (b.yaricap < a.yaricap){
		ufak = b;
		buyuk = a;
	}
	
	uzaklik = pow((a.x - b.x), 2) + pow((a.y - b.y), 2);
	uzaklik = sqrt(uzaklik);
	
	if (buyuk.yaricap > (uzaklik + ufak.yaricap))
		*cptr = buyuk;
}