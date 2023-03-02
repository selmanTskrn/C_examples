#include <stdio.h>

void hesapla(char [], int *, int *, int *);

int main()
{
	char komut[50];
	int bekleme=0, xkonum=0, ykonum=0;
	
	printf("Robot icin komut dizgisini giriniz : \n");
	fgets(komut, 50, stdin);
	
	hesapla(komut, &bekleme, &xkonum, &ykonum);
	
	printf("------------------------------\n"
	"Bekleme Sayisi : %d"
	"\nSon konum x	: %d"
	"\nSon konum y	: %d", bekleme, xkonum, ykonum);
	return 0;
}
void hesapla( char komut[], int *beklep, int *xkptr, int *ykptr)
{
	for (int i=0 ; komut[i] != '\0' ; i++)
	{
		if (komut[i] == ' ')
			*beklep += 1;
		else if (komut[i] == 'y' || komut[i] == 'Y')
			*ykptr += 1;
		else if (komut[i] == 'x' || komut[i] == 'X')
			*xkptr += 1;
	}
}