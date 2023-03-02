#include <stdio.h>
int asalKontrol(int a);
int main()
{
	int sayi;
	printf("Asal kontrolu yapilacak sayiyi giriniz : ");
	scanf("%d", &sayi);
	if (asalKontrol(sayi)){
		printf("sayi asaldir");
	}
	else
		printf("sayi asal degildir");
	return 0;
}
int asalKontrol(int a)
{
	int test=1, i=a-1;
	do {
		if(a%i==0)
			test=0;
		i--;
	}while (test==1 && i>1);
	if(test==0)
		return 0;
	else 
		return 1;
		
}