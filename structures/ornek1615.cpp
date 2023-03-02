#include <stdio.h>
typedef struct cember{
	float merkezx;
	float merkezy;
	float yaricap;
}Cember;
void tegetYap(Cember *, Cember *);
int main()
{
	Cember a1;
	Cember a2;
	
	printf("Birincinin bilgilerini giriniz (x,y,r)	: ");
	scanf("%f%f%f",&a1.merkezx, &a1.merkezy, &a1.yaricap);
	printf("Ikincinin bilgilerini giriniz (x,y,r)	: ");
	scanf("%f%f%f",&a2.merkezx, &a2.merkezy, &a2.yaricap);
	
	tegetYap( &a1, &a2);
	
	printf("---------------------------------------\n"
	"Kucuk olan teget yapildiktan sonra: \n");
	printf("Birinci cemberin bilgileri	: %.2f %.2f %.2f", a1.merkezx, a1.merkezy, a1.yaricap);
	printf("\nIkinci cemberin bilgileri	: %.2f %.2f %.2f", a2.merkezx, a2.merkezy, a2.yaricap);
	return 0;
}
void tegetYap(Cember *ptr1, Cember *ptr2)
{
	
	if ( ptr1->yaricap > ptr2->yaricap ){
		ptr2->merkezx = ptr1->merkezx;
		ptr2->merkezy = ptr1->merkezy + ptr1->yaricap + ptr2->yaricap;
	}
	else {
		ptr1->merkezx = ptr2->merkezx;
		ptr1->merkezy = ptr2->merkezy + ptr2->yaricap + ptr1->yaricap;
	}
	
}