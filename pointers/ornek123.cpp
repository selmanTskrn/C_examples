#include <stdio.h>

void ayristir( int, int *, int *, int *, int *);

int main()
{
	int sayi;
	int birler;
	int onlar;
	int yuzler;
	int binler;
	
	printf("Sayiyi giriniz : ");
	scanf("%d", &sayi);
	ayristir( sayi, &birler, &onlar, &yuzler, &binler);
	printf("%d sayisinin birler basamagi : %d\n", sayi, birler);
	printf("%d sayisinin onlar basamagi : %d\n", sayi, onlar);
	printf("%d sayisinin yuzler basamagi : %d\n", sayi, yuzler);
	printf("%d sayisinin binler basamagi : %d\n", sayi, binler);
}
void ayristir ( int a, int *birler, int *onlar, int *yuzler, int *binler)
{
	*birler = a%10;
	a = a/10;
	*onlar = a%10;
	a = a/10;
	*yuzler = a%10;
	a = a/10;
	*binler = a%10;
}