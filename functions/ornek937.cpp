#include <stdio.h>
#include <math.h>

long int tersCevir (int var);

int main()
{
	printf("%ld \n", tersCevir(123));
	
	printf("%ld \n", tersCevir(123456));
	return 0;
}
long int tersCevir (int var)
{
	int ters=0, rem;
	
	while ( var!= 0){
		
		rem = var%10;
		ters = ters*10 + rem;
		var /= 10;
	}
	return ters;
}