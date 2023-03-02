#include <stdio.h>

int main()
{
	int i;
	float a[6];
	float b[6];
	float c[12];
	
	printf("a dizisinin elemanlarini giriniz : ");
	for ( i=0 ; i<6 ; i++){
		scanf("%f", &a[i]);
		c[2*i] = a[i];
	}
	
	printf("b dizisinin elamanlarini giriniz : ");
	for ( i=0 ; i<6 ; i++){
		scanf("%f", &b[i]);
		c[2*i+1] = b[i];
	}
	
	printf("c dizisinin elemanlari : ");
	for ( i=0 ; i<12 ; i++){
		printf("%.2f, ", c[i]);
	}
	return 0;
}