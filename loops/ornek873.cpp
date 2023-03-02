#include <stdio.h>

int main()
{
	int i, seri_adedi=1;
	
	printf("Sayiyi giriniz : ");
	scanf("%d", &i);
	
	while ( i <= 0){
		printf("Yanlis !! Lutfen pozitif sayi giriniz : ");
		scanf("%d", &i);
	}
	printf("Collatz serisi : %d", i);
	while ( i!=1 ){
		if ( i%2==0 ){
			i = i/2;
			printf(", %d", i);
		}
		
		else {
			i = 3*i+1;
			printf(", %d", i);
		}
		seri_adedi++;	
	}
	printf("\nSeri %d adet sayidan olusur", seri_adedi);
	return 0;
}