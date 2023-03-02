// girilen diziyi 1 tek 1 cift olmak üzere sıralama

#include <stdio.h>
void tekCiftDuzenle( int[], int);
int main()
{
	int n, i;
	printf("Ogrenci sayisini giriniz : ");
	scanf("%d", &n);
	while (n<0 || 100<n){
		printf("tekrar giriniz (0-100 arasinda) : ");
		scanf("%d", &n);
	}
	int num[n];
	printf("Ogrenci numaralarini giriniz (%d adet) : ", n);
	for ( i=0 ; i<n ; i++)
		scanf("%d", &num[i]);
	tekCiftDuzenle( num, n );
	for ( i=0 ; i<n ; i++)
		printf("%d ", num[i]);
}
void tekCiftDuzenle( int a[], int n)
{
	int i, j, temp, yedek;
	
	for ( i=0 ; i<n ; i=i+2)
	{
		for ( j=i+1 ; j<n ; j++ ){
			if (a[j]%2==1 && a[i]%2==0){
				yedek = a[i];
				a[i] = a[j];
				a[j] = yedek;
			}
		}
	}
}