#include <stdio.h>
int mukemmelSayi(int a);
int main()
{
	int sayi;
	printf("Sayiyi giriniz : ");
	scanf("%d", &sayi);
	printf("%d", mukemmelSayi(sayi));
	
}
int mukemmelSayi(int a)
{
	int total=0;
	for (int i = a-1 ; i>0 ;i--){
		if(a%i==0)
			total = total+i;
	}
	if (total==a)
		return 1;
	else
		return 0;
}
