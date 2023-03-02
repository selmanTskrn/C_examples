#include <stdio.h>

int main()
{
	int a[5];
	int b[5];
	int c[10];
	
	printf("a dizisinin elamanlarini giriniz : ");
	for ( int i=0 ; i<5 ; i++){
		scanf("%d", &a[i]);
		c[i] = a[i];
	}
		
	printf("b dizisinin elemanlarini giriniz : ");
	for ( int i=0 ; i<5 ; i++){
		scanf("%d", &b[i]);
		c[i+5] = b[i];
	}
		
	
	printf("c dizisinin elemanlari : ");
	for ( int i=0 ; i<10 ; i++)
		printf("%d ", c[i]);
		
	return 0;
}