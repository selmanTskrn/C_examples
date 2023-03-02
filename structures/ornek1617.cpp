#include <stdio.h>
typedef struct ddortgen{
	float solustX;
	float solustY;
	float sagaltX;
	float sagaltY;
} Dortgen;
void dondur90( Dortgen *);
int main()
{
	Dortgen a;
	
	printf("Dortgenin bilgilerini giriniz\n"
	"(sol ust x, sol ust y, sag alt x, sag alt y)	: ");
	scanf("%f%f%f%f", &a.solustX, &a.solustY, &a.sagaltX, &a.sagaltY);
	
	dondur90( &a );
	
	printf("--------------------------\n"
	"Agirlik merkezinin etrafinda saat yonunde 90 derece dondukten sonraki degerleri\n"
	"(sol ust x, sol ust y, sag alt x, sag alt y)	: %.1f %.1f %.1f %.1f"
	,a.solustX, a.solustY, a.sagaltX, a.sagaltY);
	
	return 0;
}
void dondur90( Dortgen *ptr)
{
	float yedek;
	
	yedek = (ptr->solustX);
	ptr->solustX = -(ptr->solustY);
	ptr->solustY = -yedek;
	
	yedek = (ptr->sagaltX);
	ptr->sagaltX = -(ptr->sagaltY);
	ptr->sagaltY = -yedek;
}