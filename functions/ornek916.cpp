#include <stdio.h>
float yardMetreCevir(float a, char b);

int main()
{
	printf("%.4f", yardMetreCevir(3, 'y'));
	return 0;
}
float yardMetreCevir(float a, char b)
{
	if(b=='y')
		a = a*0.9144;
	if(b=='m')
		a = a/0.9144;
	return a;
}