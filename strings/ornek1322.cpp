#include <stdio.h>
#include <string.h>

int main()
{
	char isimler[10][20];
	char yedek[20];
	int i, j, degisim=1;
	
	printf("Isimleri giriniz : \n");
	for ( i=0 ; i<10 ; i++){
		scanf("%s", isimler[i]);
	}
	
	for ( i=1 ; i<10 && degisim; i++){
		degisim = 0;
		for ( j=0 ; j<9 ; j++){
			if ( strlen( isimler[j] ) < strlen( isimler[j+1] )){
				strcpy(yedek, isimler[j]);
				strcpy(isimler[j], isimler[j+1]);
				strcpy(isimler[j+1], yedek);
				degisim = 1;
			}
		}
	}
	printf("En uzundan en kisaya :");
	for ( i=0 ; i<10 ; i++)
		printf("\n%s", isimler[i]);
	return 0;
}