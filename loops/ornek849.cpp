#include <stdio.h>

int main ()
{
	int i1, i2, i3, artan=0, azalan=0, karisik=0;
	
	printf("Uc sayi giriniz : ");
	scanf("%d%d%d", &i1, &i2, &i3);
	
	while (i1!=i2 && i2!=i3){
		
		
		if ( i1>i2 && i2>i3){
			printf("girilenler azalan sirada dizilmis");
			azalan++;
	 	}
		else if ( i1<i2 && i2>i3){
			printf("girilenler karisik sirada dizilmis");
			karisik++;
		}
		else if ( i1<i2 && i2<i3){
			printf("girilenler artan sirada dizilmis");
			artan++;
		}
		printf("\nUc sayi giriniz : ");
		scanf("%d%d%d", &i1, &i2, &i3);
	}
	printf("Program bitti"
	"\nGirilen dizilerden %d tanesi artan,\n%d tanesi azalan, %d tanesi karisik siradadir", artan, azalan, karisik);
	return 0;
	
}