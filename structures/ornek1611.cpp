#include <stdio.h>
#include <math.h>
typedef struct cember{
	float merkezx;
	float merkezy;
	float yaricap;
}Cember;
void tegetYap( Cember *, char);
int main()
{
	Cember a;
	char eksen;
	
	printf("Cember hangi eksen teget yapilacak? : ");
	scanf("%c", &eksen);
	printf("Cember bilgilerini giriniz (x,y,r) : ");
	scanf("%f%f%f", &a.merkezx, &a.merkezy, &a.yaricap);
	
	tegetYap( &a, eksen);
	
	printf("--------------------------\n"
	"Cemberin yeni merkezx = %.1f, merkezy = %.1f, yaricap = %.1f"
	,a.merkezx, a.merkezy, a.yaricap);
	return 0;
	
}
void tegetYap( Cember *ptr, char eks)
{
	switch (eks){
		case 'x':
			ptr->merkezy = ptr->yaricap;
			break;
		case 'y':
			ptr->merkezx = ptr->yaricap;
	}
}