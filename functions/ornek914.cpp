#include <stdio.h>
int ekok(int a,int b);

int main()
{
	int sayi1, sayi2;
	printf("ekoku bulunacak sayilari giriniz : ");
	scanf("%d%d", &sayi1, &sayi2);
	
	printf("%d ve %d sayilarinin ekoku : %d", sayi1, sayi2, ekok(sayi1,sayi2));
	return 0;
}

int ekok(int a,int b)
{
	int sonuc=1;
	
	while (1)
	{
		if(sonuc%a==0 && sonuc%b==0)
			return sonuc;
		sonuc++;
	}
}