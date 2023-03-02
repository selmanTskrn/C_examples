#include <stdio.h>

void yemekUykuSayisiniBul( char [], int *, int *);

int main()
{
	char gozlem[] = "UUUUYYYUYYYYUUUUYUUUYYUU";
	int yemekOgun = 0;
	int uykuSeans = 0;
	
	yemekUykuSayisiniBul( gozlem, &yemekOgun, &uykuSeans);
	
	printf("Yemek ogun =%d\n", yemekOgun);
	printf("Uyku seans =%d\n", uykuSeans);
	return 0;
}
void yemekUykuSayisiniBul( char gozlem[], int *yemekptr, int *uykuptr)
{
	if (gozlem[0] == 'U')
		*uykuptr += 1;
	else if (gozlem[0] == 'Y')
		*yemekptr += 1;
	
	for (int i=0 ; gozlem[i] != '\0' ; i++)
	{
		if ( gozlem[i] == 'U' && gozlem[i+1] == 'Y')
			*yemekptr += 1;
		else if ( gozlem[i] == 'Y' && gozlem[i+1] == 'U')
			*uykuptr += 1;
	}
}