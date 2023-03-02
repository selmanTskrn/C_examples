#include <stdio.h>
int sayiDegeri(int a);

int main()
{
	int sayi;
	printf("Sayiyi giriniz : ");
	scanf("%d", &sayi);
	printf("%d", sayiDegeri(sayi));
	return 0;
}
int sayiDegeri(int a)
{
	if(a>0)
		return 1;
	if(a<0)
		return -1;
	return 0;
}