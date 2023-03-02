#include <stdio.h>
#define N 10
int main()
{
	int i, sy_a, sy_b;
	float c[10], a[N], b[N] ;
	float ortalama, toplam = 0;
	
	printf("c dizisinin elamanlari : ");
	for ( i=0 ; i<10 ; i++){
		scanf("%f", &c[i]);
		toplam = toplam + c[i];
	}
	ortalama = toplam / 10.0;
	printf("Dizinin aritmetik ortalamasi : %.2f\n", ortalama);
	
	sy_a = 0;
	sy_b = 0;
	for ( i=0 ; i<10 ; i++){
		if ( c[i] >= ortalama){
			a[sy_a] = c[i];
			sy_a++;
		}
		else {
			b[sy_b] = c[i];
			sy_b++;
		}
	}
	
	printf("a dizisinin elemanlari (ortalamadan buyuk) : \n");
	for ( i=0 ; i<sy_a ; i++)
		printf("%.1f, ", a[i]);
	
	printf("\nb dizisinin elemanlari (ortalamadan kucuk) : \n");
	for ( i=0 ; i<sy_b ; i++)
		printf("%.1f, ", b[i]);
	
	return 0;

}

