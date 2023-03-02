#include <stdio.h>

void hesapla( char [], char [], int *, int *, int *);

int main()
{
	char dogruCevap[100] = "AABCDEEABCDEAACCDEEABBCCC";
	char ogrenciCevap[100] = "aa DAbc             BB  E";
	int dogru=0, yanlis=0, bos=0;
	
	printf("Dogru Cevap Anahtarini giriniz : %s", dogruCevap);
	
	printf("\nOgrencinin Cavaplarini giriniz : %s", ogrenciCevap);
	
	hesapla( dogruCevap, ogrenciCevap, &dogru, &yanlis, &bos);
	printf("\n--------------------------\n");
	printf("Dogru Sayisi : %d"
	"\nYanlis Sayisi 	: %d"
	"\nBos Sayisi 	: %d", dogru, yanlis, bos);
	return 0;
}
void hesapla( char dogruCevap[], char ogrenciCevap[], int *dogrup, int *yanlisp, int *bosp)
{
	int i = 0;
	
	while ( dogruCevap[i] != '\0' && ogrenciCevap[i] != '\0')
	{
		if(ogrenciCevap[i] == ' ')
			*bosp += 1;
		else if ( ogrenciCevap[i]==dogruCevap[i] || ogrenciCevap[i]==dogruCevap[i]+32 )
			*dogrup += 1;
		else 
			*yanlisp += 1;
		
		i++;
	}
}