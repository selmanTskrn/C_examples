#include <stdio.h>
#include <stdlib.h>
int asaliBul(int var, char a);

int main()
{
	printf("\n%d", asaliBul(15, 'b'));
	
	printf("\n%d", asaliBul(12, 'k'));
}
int asaliBul(int var, char a)
{
	int test=1 , sayac;
		
	while (test==1){
		if(a=='b')
			var++;
		else if (a=='k')
			var--;
		
		for( sayac = var-1 ; test==1 && 1<sayac ; sayac--){
			
			if ( var%sayac == 0)
				test=0;
			
		}
		if (test==1)
			break;
		else 
			test=1;
	}
	return var;
}