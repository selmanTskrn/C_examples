#include <stdio.h>

void asalaTamamla( int *);

int main()
{
	int sayi;
	
	printf("Sayiyi giriniz : ");
	scanf("%d", &sayi);
	
	asalaTamamla( &sayi);
	
	printf("------------------------\n"
	"Sayinin donustugu asal sayi = %d", sayi);
	return 0;
}
void asalaTamamla( int *sayi)
{
	int i, j, test=1;
	
	for ( i=*sayi+1 ; test ; i++)
	{
		test = 0;
		for ( j=i-1 ; j>1 && test==0 ; j--)
		{
			if ( i%j == 0 )
				test = 1;
		}
		if (test==0)
			break;
	}
	*sayi = i;
}