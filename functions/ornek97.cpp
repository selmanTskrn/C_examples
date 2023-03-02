#include <stdio.h>
#include <math.h>
float integral(int a, int b);
double f(double x);
int main()
{
	int a, b;
	
	printf("alt ve ust degerleri giriniz : ");
	scanf("%d%d", &a, &b);
	
	printf("%d ve %d sayilari arasindaki f(x) integrali : %f ", a, b, integral(a,b));
	return 0;
}
float integral(int a, int b)
{
	float sonuc=0; 
	float h;
	h = (b-a)/1000.0;
	for (int k=1 ; k<=999 ; k++){
		sonuc = sonuc + f(a+k*h);
	} 
	sonuc= h*(sonuc + f(a)/2 + f(b)/2);
	return sonuc ;
}
double f(double x)
{
	return 3 * pow(x,5) + 5 * x ;
}