#include <stdio.h>
#include <ctype.h>

void seslisessizsay( char [], int *, int *);

int main()
{
	char cumle[100];
	int sesli = 0, sessiz = 0;
	
	printf("Cumleyi giriniz : ");
	fgets(cumle, 100, stdin);
	
	seslisessizsay( cumle, &sesli, &sessiz);
	
	printf("-------------------\n"
	"Girilen cumlede %d sesli, %d sessiz harf bulunmaktadir.", sesli, sessiz);
	return 0;
}
void seslisessizsay( char cumle[], int *sesli, int *sessiz)
{
	int i;
	
	for ( i=0 ; cumle[i] != '\0' ; i++)
	{
		if (isalpha( cumle[i] ))
		{
			if(cumle[i] == 'a' || cumle[i] == 'e' || cumle[i] == 'i' || cumle[i] == 'o' || cumle[i] == 'u')
				*sesli += 1;
			else if(cumle[i] == 'A' || cumle[i] == 'E' || cumle[i] == 'I' || cumle[i] == 'O' || cumle[i] == 'U')
				*sesli += 1;
			else
				*sessiz += 1;
		}
	}	
}
