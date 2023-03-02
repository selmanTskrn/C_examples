// 2. dizinin 1. dizi içinde aynı sıra ile var olup olmadıgını bulma

#include <stdio.h>
int icindeVarMi(int [], int, int[], int);
int main()
{
	int dizi1[7] = {3, 12, 1, 12, 7, 3, 4};
	int dizi2[4] = {12, 7, 3, 4}, c;
	
	c = icindeVarMi(dizi1, 7, dizi2, 4);
	printf("Sonuc = %d", c);
}
int icindeVarMi(int a[], int n1, int b[], int n2)
{
	int i=0, j, k=0, test=0;
	
	for ( j=0 ; j<n2 ; j++)
	{
		for ( ; i<n1 ; i++)
		{
			if (b[j]==a[i]){
				i++;
				test++;
				break;
			}
		}
	}
	if ( test==n2 )
		return 1;
	else 
		return 0;
}