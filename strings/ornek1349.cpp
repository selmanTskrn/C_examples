#include <stdio.h>
#include <string.h>
#define M 20

void sansurle( char [], char [][M], int );

int main()
{
	char cumle[150] = "sonra dedim ki lan sinek sen aptal misin sinek kadar degerin yok";
	char yasak[3][M] = {"inek", "aptal", "lan"};
	
	puts("Cumleyi giriniz : ");
	puts(cumle);
	//fgets(cumle, 150, stdin);
	
	sansurle( cumle , yasak, 3);
	
	printf("\nSansurlenmis hali :\n%s", cumle);
	return 0;
}
void sansurle( char cumle[], char yasak[][M], int n)
{
	int i, j, len;
	char *ptr;
	
	for ( i=0 ; i<n ; i++)
	{
		ptr = strstr( cumle, yasak[i]);
		len = strlen(yasak[i]);
		while ( ptr != NULL)
		{
			for (j=0 ; j<len ; j++)
			{
				*(ptr+j) = '*';
			}
			ptr = strstr( ptr+1, yasak[i]);
		}
	}
}