#include <stdio.h>
#include <math.h>
void orijineEnYakin(int x1,int y1,int x2,int y2,int x3,int y3);
int main()
{
	orijineEnYakin(3,3 , 7,7 , 9,9);
}
void orijineEnYakin(int x1,int y1,int x2,int y2,int x3,int y3)
{
	int ilkNokta, ikinciNokta, ucuncuNokta, enKucuk, enKucuk1, enKucuk2;
	ilkNokta = sqrt(x1*x1+y1*y2);
	ikinciNokta = sqrt(x2*x2+y2*y2);
	ucuncuNokta = sqrt(x3*x3+y3*y3);
	
	enKucuk = ilkNokta;
	enKucuk1 = x1;
	enKucuk2 = y1;
	if (ikinciNokta<enKucuk){
		enKucuk = ikinciNokta;
		enKucuk1 = x2;
		enKucuk2 = y2;
	}
		
	if (ucuncuNokta<enKucuk){
		enKucuk = ucuncuNokta;
		enKucuk1 = x3;
		enKucuk2 = y3;
	}
	printf("Yakin olan : (%d,%d)", enKucuk1, enKucuk2);
	
}