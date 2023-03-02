#include <stdio.h>
#include <string.h>

int main()
{
	char isimler[10][15];
	int i, len;
	
	printf("Isimleri giriniz :\n");
	for ( i=0 ; i<10 ; i++){
		scanf("%s", isimler[i]);
	}
	printf("an ile bitenler");
	for ( i=0 ; i<10 ; i++){
		len = strlen( isimler[i] );
		if ( isimler[i][len-1] == 'n' && isimler[i][len-2] == 'a')
			printf("\n%s", isimler[i]);
	}
	return 0;
}