#include <stdio.h>

int main()
{
	int sayi, i, i1, i2, direnc;
	
	for(sayi=10 ; sayi<100 ; sayi++){
		i=sayi;
		direnc=0;
		while (i>9){
			i1= (i-i%10)/10;
			i2= i%10;
			i= i1*i2;
			direnc++;
		}
		printf("%d sayisinin carpim direnci = %d\n", sayi, direnc);
		
	}
	return 0;
}