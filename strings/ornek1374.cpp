#include <stdio.h>
#include <ctype.h>
#include <string.h>

int hesapla( char [], int *);

int main()
{
	char cumle[150];
	int s, harfSayisi = 0;
	
	printf("Ingilizce cumleyi giriniz : \n");
	fgets(cumle, 150, stdin);
	
	printf("---------------------------\n");
	hesapla( cumle, &harfSayisi);
	if (hesapla( cumle, &harfSayisi) == 1)
		printf("Bu cumle bir pangramdir");
	else
		printf("Bu cumle bir pangram degildir");
		
	printf("\nCumle icerisindeki alfabenin harf sayisi : %d", harfSayisi);
	return 0;
}
int hesapla( char cumle[], int *harfptr)
{
	char harf[30] = {0};
	int i, j, test, len;
	
	for (i=0 ; cumle[i] != '\0' ; i++)
	{
		if (isalpha(cumle[i])){
			
			if (isupper(cumle[i])){
				cumle[i] = tolower(cumle[i]);
			}
			test = 1;
			len = strlen(harf);
			for(j=0 ; j<len && test ; j++)
			{
				if ( harf[j] == cumle[i]){
					test = 0;
				}
			}
			if (test==1){
				harf[len] = cumle[i];
				harf[len+1] = '\0';
			}
			
		}
	}
	
	for (i=0 ; harf[i] != '\0' ; i++ )
	{
	}
	*harfptr = i;
	
	if (*harfptr == 26)
		return 1;
	else 
		return 0;
}