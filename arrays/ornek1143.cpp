#include <stdio.h>
void eleme( int[], int);
int main()
{
	int dizi[10] = { 40, 80, 32, 40 , 80 ,54 ,12 ,40, 78, 21};
	int i;
	
	/*printf("dizinin elemanlarini giriniz : ");
	for ( i=0 ; i<10 ; i++)
		scanf("%d", &dizi[i]);*/
	
	eleme( dizi, 10 );
	printf("Dizinin son hali : ");
	for ( i=0 ; i<10 ; i++)
		printf("%d, ", dizi[i]);
}
void eleme( int a[], int n)
{
	int i, j;
	int yedek[n];
	
	for ( i=0 ; i<n ; i++)
	{
		yedek[i] = a[i];
		for ( j=0 ; j<n ; j++)
		{
			if (a[i]==a[j] && a[i]!= -1 && i!=j){
				yedek[i] = -1;
			}
		}
	}
	for ( i=0 ; i<n ; i++)
		a[i] = yedek[i];
}
