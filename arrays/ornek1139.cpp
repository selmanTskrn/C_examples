// 2. dizinin 1. dizi içinde aynen var olup olmadıgı kontrolü
#include <stdio.h>
int icindeVarMi(char [], int , char [], int );
int main()
{
	char dizi1[6] = {'a','n','k','a','r','a'};
	char dizi2[3] = {'k','a','r',};
	int c;
	
	c = icindeVarMi(dizi1, 6, dizi2, 3);
	printf("Sonuc = %d", c);
}
int icindeVarMi(char a[], int n1, char b[], int n2)
{
	int i=0, j, k=0, test=0;
	int yedek[10];
	
	for (i=0 ; i<n1 ; i++)
	{
		test = 0;
		for (j=0 ; j<n2 ; j++)
		{
			if (a[i+j]==b[j]){
				test++;
			}
		}
		if (test==n2)
			break;
	}
	
	if(test==n2)
		return 1;
	else 
		return 0;
}