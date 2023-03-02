#include <stdio.h>
int ebob(int a, int b);

int main()
{
	int var1, var2;
	printf("iki pozitif tam sayi giriniz : ");
	scanf("%d%d", &var1, &var2);
	printf("%d ve %d sayilarinin ebobu %d dir", var1, var2, ebob(var1,var2));
	return 0;
	
}
int ebob(int a, int b)
{
	int ebob;
	
	ebob = a>b ? b : a;
	while(1){
		if (a%ebob==0 && b%ebob==0){
			break;
		}
		ebob--;
	}
	return ebob;	
}