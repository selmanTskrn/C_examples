#include <stdio.h>
#include <string.h>

int farkiSay( char [], char []);
int main()
{
	char word1[50], *ptr1 = word1;
	char word2[50], *ptr2 = word2;
	int fark;
	
	printf("Ilk kelimeyi giriniz		: ");
	scanf("%s", word1);
	
	while (1){
		printf("Sonraki kelimeyi giriniz	: ");
		scanf("%s", word2);
		fark = farkiSay( word1 , word2 );
		if ( fark != 1 ){
			printf("(%d harf farkli zincir bozuldu)\n", fark);
			break;
		}
		else
			printf("(%d harf farkli zincir bozulmadi)\n", fark);
		word1[50] = {0};
		strcpy(word1, word2);
	}
	printf("Program sona erdi.");
	return 0;
}
int farkiSay( char word1[], char word2[])
{
	int i=0, farkliHarf=0;
	
	while (word1[i] != '\0'){
		if ( word1[i] != word2[i])
			farkliHarf++;
		i++;
	}
	return farkliHarf;
}
