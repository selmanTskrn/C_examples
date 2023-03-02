#include <stdio.h>
typedef struct ddortgen{
	float solustX;
	float solustY;
	float sagaltX;
	float sagaltY;
} Dortgen;
void merkezeAl( Dortgen *);
int main()
{
	Dortgen a;
	
	printf("Dortgenin bilgilerini giriniz\n"
	"(sol ust x, sol ust y, sag alt x, sag alt y)	: ");
	scanf("%f%f%f%f", &a.solustX, &a.solustY, &a.sagaltX, &a.sagaltY);
	
	merkezeAl( &a );
	
	printf("--------------------------\n"
	"Agirlik merkezi orijin olduktan sonraki degerleri\n"
	"(sol ust x, sol ust y, sag alt x, sag alt y)	: %.1f %.1f %.1f %.1f"
	,a.solustX, a.solustY, a.sagaltX, a.sagaltY);
	
	return 0;
}
void merkezeAl( Dortgen *ptr)
{
	ptr->solustX = ((ptr->solustX) - (ptr->sagaltX)) / 2;
	ptr->solustY = ((ptr->solustY) - (ptr->sagaltY)) / 2;
	ptr->sagaltX = -(ptr->solustX);
	ptr->sagaltY = -(ptr->solustY);
}