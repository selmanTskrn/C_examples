#include <stdio.h>

void simetrik( int *, int *, char);

int main()
{
	int x, y;
	char eksen;
	
	printf("Hangi eksene gore simetrik bulunacak\n"
	"(orijin icin o, yatay eksen icin x, dusey eksen icin y) : ");
	scanf("%c", &eksen);
	
	printf("Noktanin koordinatlarini giriniz (x y) : ");
	scanf("%d%d", &x, &y);
	
	simetrik( &x, &y, eksen);
	
	printf("Verilen noktanin simetrigi %d ve %d dir.", x, y);
	return 0;
}
void simetrik( int *xp, int *yp, char eksen)
{
	int yedek;
	
	switch (eksen) {
		case 'o':
			*xp = -*xp;
			*yp = -*yp;
			break;
		case 'y':
			*xp = -*xp;
			break;
		case 'x':
			*yp = -*yp;
			break;
	}
}