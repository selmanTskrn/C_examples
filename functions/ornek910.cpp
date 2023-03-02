#include <stdio.h>
void mukemmelYaz(int a, int b);
int main()
{
	int bas , son ;
	mukemmelYaz(1,10);
	printf("\n");
	printf("bas ve son degerlerini giriniz : ");
	scanf("%d%d", &bas, &son);
	mukemmelYaz(bas,son);
	
	return 0;
}
void mukemmelYaz(int a, int b)
{
	int toplam;
	for ( ; a<=b ; a++){
		toplam=0;
		for(int i=1 ; i<=a/2 ; i++){
			if ( a%i==0)
				toplam=toplam+i;
		}
		if(toplam==a)
			printf("%d, ", a);
	}
}