#include <stdio.h>

int sozcukSay( char [] );

int main()
{
	char cumle[250];
	
	printf("Cumleyi giriniz : ");
	fgets(cumle, 250, stdin);
	
	printf("Girilen cumle %d sozcukten olusmaktadir.", sozcukSay(cumle));
	return 0;
}
int sozcukSay( char cumle[] )
{
	int i, adet=0;
	
	for ( i=0 ; cumle[i] != '\0' ; i++){
		if ( cumle[i] == ' ' && cumle[i+1] != ' ')
			adet++;
	}
	
	return adet+1;
}