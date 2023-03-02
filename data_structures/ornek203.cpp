#include <stdio.h>
#include <stdlib.h>

typedef struct fdugum{
	int yas;
	struct fdugum *ptr;
}Fdugum;
int main()
{
	
}
void sondanSil(Fdugum **p)
{
	Fdugum *geciciptr, *silptr;
	
	geciciptr = NULL;
	silptr = (*p);
	
	while( silptr != NULL){
		geciciptr = silptr;
		silptr = silptr->ptr;
	}
	geciciptr->ptr = NULL;
	free(silptr);
}