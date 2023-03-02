#include <stdio.h>
#include <string.h>
typedef struct kapasite{
	char cins[10];
	float miktar;
} Kapasite;
void yukariDonustur( Kapasite *);
int main()
{
	Kapasite a1;
	
	printf("Kapaiste miktar ve cinsini giriniz : ");
	scanf("%f%s", &a1.miktar, &a1.cins);
	
	yukariDonustur( &a1 );
	
	printf("Bir uste donmusmus hali :");
	printf(" %.2f %s", a1.miktar, a1.cins);
	return 0;
}
void yukariDonustur( Kapasite *ptr)
{
	if (strcmp(ptr->cins, "kb") == 0){
		strcpy(ptr->cins, "mb");
		ptr->miktar /= 1024;
	}
	else if (strcmp(ptr->cins, "mb") == 0){
		strcpy(ptr->cins, "gb");
		ptr->miktar /= 1024;
	}
	else if (strcmp(ptr->cins, "gb") == 0){
		strcpy(ptr->cins, "tb");
		ptr->miktar /= 1024;
	}
}