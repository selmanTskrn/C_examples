#include <stdio.h>
int kuvvet (int taban, int us);
int main()
{
	int taban, us;
	
	printf("taban ve us degerlerini giriniz : ");
	scanf("%d%d", &taban, &us);
	printf("\n%d", kuvvet(taban, us));
	return 0;
}
int kuvvet (int taban, int us)
{
	int sonuc=1;
	while ( 1 <= us){
		sonuc *= taban;
		us--;
	}
	return sonuc;
}