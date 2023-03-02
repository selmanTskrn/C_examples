#include <stdio.h>
#include <math.h>

double kuvvet(int x, int y, float z){
	double G= 6.673/pow(10,11);
	
	return G*x*y/(z*z);
	
}
int main ()
{
	int agirlik1, agirlik2;
	float uzaklik;

	printf("Cisimlerin agirligini giriniz (kg) : ");
	scanf("%d%d", &agirlik1, &agirlik2);
	printf("Aralarindaki uzakligi giriniz (m)  : ");
	scanf("%f", &uzaklik);
	printf("\nCekim kuvveti = %f Newtondur", kuvvet(agirlik1,agirlik2,uzaklik));
	return 0;
}