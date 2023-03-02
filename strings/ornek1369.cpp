#include <stdio.h>

void hesapla(char [], int *, int *, int *);

int main()
{
	char sampiyonluk[100] = "FBFGGFFbBFGFggGff  f   Bf fBGGfBBBGGbfggfGBFFGFgB FGG";
	int bes=0, fb=0, gs=0; 
	
	printf("Sampiyonluklari giriniz (1959-) : \n%s", sampiyonluk);
	hesapla(sampiyonluk, &bes, &fb, &gs);
	printf("\n-------------------------------------------------------\n"
	"Besiktas Yildiz Sayisi		: %d"
	"\nFenerbahce Yildiz Sayisi	: %d"
	"\nGalatasaray Yildiz Sayisi	: %d", bes, fb, gs);
	
	return 0;
}
void hesapla(char samp[], int *besptr, int *fbptr, int *gsptr)
{
	int i;
	
	for (i=0 ; samp[i] != '\0' ; i++)
	{
		if (samp[i] == 'b' || samp[i] == 'B')
			*besptr += 1;
		else if ( samp[i] == 'f' || samp[i] == 'F')
			*fbptr += 1;
		else if ( samp[i] == 'g' || samp[i] == 'G')
			*gsptr += 1;
	}
	*besptr /= 5;
	*fbptr /= 5;
	*gsptr /= 5;
}
