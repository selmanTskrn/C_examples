#include <stdio.h>
#include <math.h>

float toplamSure(int x, int y);

int main()
{
	int ilkHiz, aci;
	printf("Ilk hizi giriniz : ");
	scanf("%d", &ilkHiz);
	printf("Aciyi giriniz   : ");
	scanf("%d", &aci);
	printf("Cekim kuvveti = %.3f", toplamSure(ilkHiz,aci));
	return 0;
}

float toplamSure(int x, int y){
	
	return 2*((x*sin(y * M_PI/180)/9.80));
	
}