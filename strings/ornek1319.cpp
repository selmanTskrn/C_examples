#include <stdio.h>
#include <string.h>

int main()
{
	char isimler[10][15];
	int len, i;
	
	printf("Isimleri giriniz : ");
	for( i=0 ; i<10 ; i++){
		scanf("%s", isimler[i]);
	}
	printf("Ilk ve son harfi ayni olanlar :");
	for ( i=0 ; i<10 ; i++){
		len = strlen( isimler[i] );
		if (isimler[i][len-1] == isimler[i][0])
			printf("\n%s", isimler[i]);
	}
	return 0;
}