#include <stdio.h>
int daireselMi(int var);
int main()
{
	printf("1.Satir= %d \n", daireselMi(102564));
	
	printf("2.Satir= %d \n", daireselMi(123456));
	return 0;
}
int daireselMi(int var)
{
	int i1, i2;
	
	i1 = ( var - var%10 ) / 10;
	i2 = var%10;

	if ( i2*var == (i2*100000)+i1)
		return 1;
	else
		return 0;
}