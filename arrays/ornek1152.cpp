#include <stdio.h>

int main()
{
	int n, i, j;
	int enBuyuk, yedek;
	
	printf("Eleman sayisini giriniz : ");
	scanf("%d", &n);
	
	int kod[n], sayi[n];
	
	for ( i=0 ; i<n ; i++)
	{
		printf("%d. esyanin kodu ve sayisi : ", i+1);
		scanf("%d %d", &kod[i], &sayi[i]);
	}
	
	for ( i=0 ; i<n-1 ; i++)
	{
		enBuyuk = i;
		for ( j=i+1 ; j<n ; j++){
			if ( sayi[j]>sayi[enBuyuk] )
				enBuyuk = j;
		}
		yedek = sayi[i];
		sayi[i] = sayi[enBuyuk];
		sayi[enBuyuk] = yedek;
		
		yedek = kod[i];
		kod[i] = kod[enBuyuk];
		kod[enBuyuk] = yedek;
	}
	
	printf("Esyalar Sirali \n");
	printf("Kodlar :");
	for ( i=0 ; i<n ; i++)
		printf("	%d", kod[i]);
	printf("\nSayilari:");
	for ( i=0 ; i<n ; i++)
		printf("	%d", sayi[i]);
}