//fibonacci sayilari
#include <stdio.h>

int main()
{
	int terim, i, c=1, a=1, b=0;
	
	printf("Terim sayisi giriniz : ");
	scanf("%d", &terim);
	
	for (i=1 ; i<=terim ; i++){
		printf("%d, ", c);
		c = a + b;
		b = a;
		a = c;
		
	}
	return 0;
}