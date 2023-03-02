#include <stdio.h>

int main()
{
	char isimler[5][15];
	int i;
	
	printf("Isim giriniz : \n");
	for ( i=0 ; i<5 ; i++){
		scanf("%s", isimler[i]);
	}
	printf("B ile baslayanlar");
	for ( i=0 ; i<5 ; i++){
		if ( isimler[i][0] == 'B')
			printf("\n%s", isimler[i]);
	}
	return 0;
}