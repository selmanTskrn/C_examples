#include <stdio.h>

void bulEnbEnk( int , int *, int *);

int main()
{
	int sayi;
	int enKucuk;
	int enBuyuk;
	
	printf("Sayiyi giriniz : ");
	scanf("%d", &sayi);
	
	bulEnbEnk( sayi, &enKucuk, &enBuyuk);
	
	printf("---------------\n"
	"En buyuk rakam : %d\n"
	"En kucuk rakam : %d", enBuyuk, enKucuk);
	return 0;
}
void bulEnbEnk( int n, int *enkp, int *enbp)
{
	*enbp = n%10;
	*enkp = n%10;
	n /= 10;
	
	while ( n != 0){
		if ( n%10 < *enkp)
			*enkp = n%10;
		if ( n%10 > *enbp)
			*enbp = n%10;
		n /= 10;
	}
}