#include <stdio.h>
#include <string.h>
typedef struct sirket{
	char isim[20];
	int sermaye;
	float pazarPayi;
}Sirket;
Sirket birlestir( Sirket, Sirket );
int main()
{
	Sirket a1, a2, a3;
	
	printf("Birinci sirketin isim, sermaye ve pazar payini giriniz : ");
	scanf("%s%d%f", &a1.isim, &a1.sermaye, &a1.pazarPayi);
	printf("Ikinci sirketin isim, sermaye ve pazar payini giriniz : ");
	scanf("%s%d%f", &a2.isim, &a2.sermaye, &a2.pazarPayi);
	
	a3 = birlestir( a1, a2);
	
	printf("-------------------------------\n"
	"Birlesimden ortaya cikan sirketin\nismi, sermayesi ve pazar payi : %s, %d, %.1f"
	, a3.isim, a3.sermaye, a3.pazarPayi);
	return 0;
}
Sirket birlestir( Sirket a, Sirket b )
{
	Sirket c;
	
	strcpy(c.isim, a.isim);
	if (a.sermaye < b.sermaye)
		strcpy(c.isim, b.isim);
	c.sermaye = a.sermaye + b.sermaye;
	c.pazarPayi = a.pazarPayi + b.pazarPayi;
	
	return c;
}