#include <stdio.h>
#include <stdlib.h>
typedef struct dugum{
	int sayi;
	struct dugum *ptr;
}Dugum;
void silN( Dugum **, int);
int main()
{
	
}
void silN( Dugum **p, int n)
{
	Dugum *geciciptr, *onceptr, *silptr;
	
	if (n == 1){
		geciciptr = *p;
		*p = (*p)->ptr;
		free(geciciptr);
	}
	else{
		onceptr = *p;
		silptr = (*p)->ptr;
		
		for(int i=2 ; i != n && silptr != NULL ; i++){
			onceptr = silptr;
			silptr = silptr->ptr;
		}
		if (silptr != NULL){
			geciciptr = silptr;
			onceptr->ptr = silptr->ptr;
			free(geciciptr);
		}
		else
			printf("Gonderilen sira bulunamadi\n");
	}
	
	
}