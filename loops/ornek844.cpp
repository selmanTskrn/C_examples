#include <stdio.h>

int main ()
{
	long sayi, toplam=0;
	int	i=10, j=8, test=1, ,;
	
	printf("Sekizlik tabanda sayi giriniz : ");
	scanf("%d", &sayi);
	
	
	for ( int k = 1 ; k<10 ; k++){
	
		if ( sayi % i >= j ){
			printf("sayi sekizlik tabanda gecerli degildir.");
			test=0;
			break;
		}
		i=i*10;
		j=j*10;
	}
	
	if (test == 1){
		
		for (int k=1 , i=1 ;  k<1000000000 ; k*=10, i*=8 ){
			toplam = toplam + i*(sayi%(10*k)/k);
			
		}
		printf("Onluk tabandaki karsiligi : %d", toplam);
			
	}
	return 0; 
}