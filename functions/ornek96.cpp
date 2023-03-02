#include <stdio.h>
#include <math.h>

float cevirKG(float a);

int main()
{
	float paraMiktari;
	printf("Para miktarini giriniz (TL) : ");
	scanf("%f", &paraMiktari);
	
	printf("Bozukluklarinin toplam kg ederi = %.5f", cevirKG(paraMiktari));
	
}
float cevirKG(float a)
{
	
	return 0.0082*(a-fmod(a,1)) + ((fmod(a,1)-fmod(a,0.50))/0.50)*0.0068 + ((fmod(a,0.50)-fmod(a,0.25))/0.25)*0.004 + (fmod(a,0.25)/0.10)*0.00315;
}