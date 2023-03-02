#include <stdio.h>
#include <math.h>

float toplamMesafe(int a, int b, float c);

int main()
{
	int ilkHiz, aci;
	float sure;
	printf("Ilk hizi giriniz (m/s) : ");
	scanf("%d", &ilkHiz);
	printf("Aciyi giriniz (derece) : ");
	scanf("%d", &aci);
	printf("Havada kalma suresini giriniz (s) : ");
	scanf("%f", &sure);
	printf("Cisim %.2f m uzaga düser", toplamMesafe(ilkHiz, aci, sure));
	return 0;
}
float toplamMesafe(int a, int b, float c)
{
	return a*cos( b * M_PI/180)*c;
}