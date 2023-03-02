#include <stdio.h>

void cevir(int, int *, int *, int *, int *);

int main()
{
	int uzunluk;
	int mtr;
	int dm;
	int cm;
	int mm;
	
	printf("Toplam uzunlugu giriniz (mm) : ");
	scanf("%d", &uzunluk);
	
	cevir( uzunluk, &mtr, &dm, &cm, &mm);
	
	printf("Girilen uzunluk : %d m, %d dm, %d cm, %d mm", mtr, dm, cm, mm);
}
void cevir( int uzunluk, int *mtrp, int *dmp, int *cmp, int *mmp)
{
	*mmp = uzunluk%10;
	uzunluk /= 10;
	
	*cmp = uzunluk%10;
	uzunluk /= 10;
	
	*dmp = uzunluk%10;
	uzunluk /= 10;
	
	*mtrp = uzunluk;
}