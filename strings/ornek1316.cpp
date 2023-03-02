#include <stdio.h>

int main()
{
	char isimler[10][10];
	int i;
	
	printf("Isimleri giriniz : ");
	for ( i=0 ; i<10 ; i++){
		scanf("%s", isimler[i]);
	}
	printf("Me ile baslayanlar : \n");
	for ( i=0 ; i<10 ; i++){
		if (isimler[i][0] == 'M' && isimler[i][1] == 'e')
			printf("%s\n", isimler[i]);
	}
	return 0;
}