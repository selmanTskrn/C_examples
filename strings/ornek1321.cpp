#include <stdio.h>
#include <string.h>

int main()
{
	char isimler[5][20];
	char yedek[20];
	int i, j;
	
	printf("Isimleri giriniz : ");
	for ( i=0 ; i<5 ; i++){
		scanf("%s", isimler[i]);
	}
	for ( i=1 ; i<5 ; i++){
		for ( j=0 ; j<5-1 ; j++){
			if ( isimler[j][0] > isimler[j+1][0]){
				strcpy(yedek , isimler[j]);
				strcpy(isimler[j], isimler[j+1]);
				strcpy(isimler[j+1], yedek);
			}
		}
	}
	printf("Siralanmis hali : ");
	for ( i=0 ; i<5 ; i++)
		printf("%s\n", isimler[i]);
	return 0;
}