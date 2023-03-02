#include <stdio.h>
#define N 10
int main()
{
	float a[5], b[5], c[N];
	float ortalama, toplam = 0;
	int i, sy_c ;
	
	printf("a dizisini giriniz : ");
	for ( i=0 ; i<5 ; i++){
		scanf("%f", &a[i]);
		toplam = toplam + a[i];
	}
	
	printf("b dizisini giriniz : ");
	for ( i=0 ; i<5 ; i++){
		scanf("%f", &b[i]);
		toplam = toplam + b[i];
	}
	
	ortalama = toplam / 10.0;
	printf("Dizilerin aritmetik ortalamasi : %.2f", ortalama);
	
	sy_c = 0;
	
	for ( i=0 ; i<5 ; i++){
		if ( a[i] >= ortalama ){
			c[sy_c] = a[i];
			sy_c++;
		}
		
		if ( b[i] >= ortalama ){
			c[sy_c] = b[i];
			sy_c++;
		}
	}
	printf("\nc dizisinin elemanlari (ortalamadan buyukler) : \n");
	for ( i=0 ; i<sy_c ; i++){
		printf("%.2f, ", c[i]);
	}
	return 0;
	
	
}