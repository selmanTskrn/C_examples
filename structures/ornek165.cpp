#include <stdio.h>

struct zaman{
	int saat;
	int dak;
	int san;
};
void zamanSirala(struct zaman *, struct zaman *);
int main()
{
	struct zaman a1 = {1, 0, 41};
	struct zaman a2 = {1, 0, 40};
	
	printf("a1 : %02d:%02d:%02d\n", a1.saat, a1.dak, a1.san);
	printf("a2 : %02d:%02d:%02d\n", a2.saat, a2.dak, a2.san);
	zamanSirala( &a1, &a2 );
	printf("a1 : %02d:%02d:%02d\n", a1.saat, a1.dak, a1.san);
	printf("a2 : %02d:%02d:%02d\n", a2.saat, a2.dak, a2.san);
	return 0;

	
}
void zamanSirala(struct zaman *ptr1, struct zaman *ptr2)
{
	struct zaman yedek;
	int a1, a2;

	a1 = (ptr1->saat)*3600 + (ptr1->dak)*60 + (ptr1->san);
	a2 = (ptr2->saat)*3600 + (ptr2->dak)*60 + (ptr2->san);
	
	if ( a1 > a2 ){
		yedek = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = yedek;
	}
}
