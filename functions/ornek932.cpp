#include <stdio.h>
int permutasyon (int n, int r);

int main()
{
	int var1, var2;
	printf("n ve r degerlerini giriniz  : ");
	scanf("%d%d", &var1, &var2);
	printf("\n-------------------------");
	
	printf("\nP(%d,%d) = %d", var1, var2, permutasyon(var1, var2));
	return 0;
}
int permutasyon (int n, int r)
{
	int fak1=1, sy;

	for ( sy = n ; n-r<sy ; sy--){
		fak1 = fak1 * sy;
	}
	
	return fak1;
}
