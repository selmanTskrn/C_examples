#include <stdio.h>
#include <math.h>
float uzaklik (int, int, int, int);
int main()
{
	int x1, x2, y1, y2;
	
	printf("x1,y1 ve x2,y2 degerlerini giriniz : ");
	scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
	printf("noktalar arasindaki uzaklik : %.2f", uzaklik ( x1, y1, x2, y2));
}
float uzaklik (int x1, int y1, int x2, int y2)
{
	float a;
	a = (x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2);
	return sqrt( a );
}