#include <stdio.h>

int icindeVarMi(int var, int kontrol);
int main()
{
	
	printf("\n%d", icindeVarMi (54572, 3));
	printf("\n%d", icindeVarMi (646, 4));
	return 0;
}
int icindeVarMi (int var, int kontrol)
{
	int a=0, b=10, test=1;
	
	for (int i=1 ; i<var ; i*=10){
		a++;
	}
	for (int i=a ; 0<i ; i--){
		if ( var%b/(b/10)==kontrol )
			test=0;
		b*=10;
	}
	if (test==1)
		return 0;
	else
		return 1;
	
	return a;
	
}