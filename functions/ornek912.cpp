#include <stdio.h>

void asalYaz(int a, int b);

int main()
{
	int bas=7, son=21;
	asalYaz(2,10);
	printf("\n");
	asalYaz(bas, son);
	return 0;
}
void asalYaz(int a, int b)
{
	while(a<=b){
		int test=1;
		for(int i=a-1 ; i>1 ; i--){
			if ( a%i==0 )
				test=0;
			
		}
		if ( test )
			printf("%d, ", a);
		a++;
	}
}