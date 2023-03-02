#include <stdio.h>
int ciftRakamSay (int);

int main()
{
	printf("\n%d", ciftRakamSay (83420));
	
}
int ciftRakamSay (int a)
{
	int k = 0;
	
	while ( a != 0 ){
		if ( (a%10)%2 == 0 )
			k++;
		a /= 10;
	}
	return k;
}