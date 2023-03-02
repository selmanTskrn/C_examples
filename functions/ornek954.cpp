#include <stdio.h>
#include <math.h>
float alan( int , int);
int main()
{
	int boy;
	int kilo;
	
	printf("Boyunuzu giriniz (cm) : ");
	scanf("%d", &boy);
	printf("Kilonuzu giriniz (kg) : ");
	scanf("%d", &kilo);
	printf("\nBeden alani = %.4f metrekaredir", alan(boy, kilo));
}
float alan( int a, int b)
{
	float x;
	x = pow (a, 0.725) * pow (b, 0.425) * 71.84 * pow (10, -4);
	return x;
}