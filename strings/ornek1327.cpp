#include <stdio.h>
#include <string.h>
#include <ctype.h>
int sozcukSay( char [], char []);

int main()
{
	char metin[255] = "havasjhdk hava asahavajhd havaasdhhava ahsd asdhava";
	char kelime[20] = "hava";
	
	puts("Metni giriniz :");
	//fgets(metin, 255, stdin);
	puts(metin);
	puts("Aranacak kelime :");
	//scanf("%s", kelime);
	
	printf("Bu kelime metinde %d kez gecmektedir.", sozcukSay( metin, kelime ));
	return 0;
}
int sozcukSay(char metin[], char kelime[])
{
	int i, j, len, adet=0;
	char *araptr;
	
	for ( i=0 ; metin[i] != '\0' ; i++){
		if ( isupper( metin[i] ))
			metin[i] = tolower( metin[i] );
		
	}
	len = strlen(kelime);

	araptr = strstr( metin, kelime);
	
	while ( araptr != NULL){
		if ( *(araptr-1) == ' ' && *(araptr+len) == ' ' ){
			adet++;
			printf("%s  ////  %s\n", araptr-1, araptr+len);
		}
		else if ( *(araptr-1) == 0 && *(araptr+len) == ' '){
			adet++;
			printf("%s  ////  %s\n", araptr-1, araptr+len);
		}
		else if ( *(araptr-1) == ' ' && *(araptr+len) == 0){
			adet++;
			printf("%s  ////  %s\n", araptr-1, araptr+len);
		}
		araptr++;
		araptr = strstr( araptr, kelime);
	}

	return adet;
}