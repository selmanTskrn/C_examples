#include <stdio.h>
int enbuyuk(int);
int main()
{
	printf("\n%d", enbuyuk(54571));
	printf("\n%d", enbuyuk(33));
}
int enbuyuk(int a)
{
	int i = a%10;
	
	while ( a != 0 ){
		a = a/10;
		if ( a%10 > i){
			i = a%10;
		}
	}
	return i;
}