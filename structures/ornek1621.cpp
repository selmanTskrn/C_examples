#include <stdio.h>
typedef struct dortgen{
	int solUstX;
	int solUstY;
	int sagAltX;
	int sagAltY;
}Dortgen;
void simetrikBul( Dortgen, Dortgen *);
int main()
{
	Dortgen a1, a2;
	
	printf("Orijinalin bilgilerini giriniz (sol ust, sag alt) : ");
	scanf("%d%d%d%d",&a1.solUstX, &a1.solUstY, &a1.sagAltX, &a1.sagAltY);
	
	simetrikBul( a1, &a2 );
	
	printf("Simetrik dikdortgen bilgileri :\n"
	"Sol ust x,y : %d %d\n"
	"Sag alt x,y : %d %d\n", a2.solUstX, a2.solUstY, a2.sagAltX, a2.sagAltY);
	return 0;
}
void simetrikBul( Dortgen a, Dortgen *ptr)
{
	ptr->solUstX = -(a.sagAltX);
	ptr->solUstY = -(a.sagAltY);
	ptr->sagAltX = -(a.solUstX);
	ptr->sagAltY = -(a.solUstY);
}