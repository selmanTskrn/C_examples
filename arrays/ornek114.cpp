#include <stdio.h>

int main()
{
	float c[12];
	float a[6];
	float b[6];
	int i;
	
	printf("c dizisinin elemanlarini giriniz : ");
	for ( i=0 ; i<12 ; i++){
		scanf("%f", &c[i]);
		if ( i%2 == 0 )
			a[i/2] = c[i];
		else
			b[i/2] = c[i];
	}
	
	printf("a dizisinin elemanlari : ");
	for ( i=0 ; i<6 ; i++)
		printf("%.2f, ", a[i]);
	
	printf("\nb dizisinin elemanlari : ");
	for ( i=0 ; i<6 ; i++)
		printf("%.2f, ", b[i]);
	
	return 0;
}