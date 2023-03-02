#include <stdio.h>

int main ()
{
	int onluk;
	
	printf(" ONLUK	SEKIZLIK  ONALTILIK  \n");
	
	for ( onluk = 0 ; onluk < 16 ; onluk++){
		printf(" %d	%o	  %x\n", onluk, onluk, onluk);
	}
	return 0;
	
}