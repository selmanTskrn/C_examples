#include <stdio.h>

struct zaman{
	int saat;
	int dak;
	int san;
};
void zamantopla( struct zaman *, struct zaman);

int main()
{
	struct zaman a1 = {23, 30, 20};
	struct zaman a2 = {1, 0, 40};
	
	printf("a1 : %02d:%02d:%02d\n", a1.saat, a1.dak, a1.san);
	printf("a2 : %02d:%02d:%02d\n", a2.saat, a2.dak, a2.san);
	zamantopla ( &a1, a2);
	printf("Toplanmis hali : %02d:%02d:%02d\n", a1.saat, a1.dak, a1.san);
	return 0;
}
void zamantopla( struct zaman *ptr, struct zaman a2)
{
	ptr->san += a2.san;
	ptr->dak += a2.dak;
	ptr->saat += a2.saat;
	if ( ptr->san > 59 ){
		ptr->dak += (ptr->san) / 60;
		ptr->san = (ptr->san) % 60;
	}
	if ( ptr->dak > 59 ){
		ptr->saat += (ptr->dak) / 60;
		ptr->dak = (ptr->dak) % 60;
	}
	ptr->saat = (ptr->saat) % 24;
}