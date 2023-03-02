#include <stdio.h>
#include <math.h>
float kenar3( int , int , int );
int main()
{
	int kenar1, kenar2, aci;
	
	printf("1. ve 2. kenar uzunluklari : ");
	scanf("%d%d", &kenar1, &kenar2);
	printf("Aci degeri : ");
	scanf("%d", &aci);
	
	printf("3.kenar uzunlugu = %.2f", kenar3( kenar1, kenar2, aci ));
	
}
float kenar3(int a , int b , int c)
{
	float d;
	
	d = pow (a,2) + pow (b,2) - 2*a*b*cos (c * M_PI/180);
	
	return sqrt ( d );
}