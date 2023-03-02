#include <stdio.h>
typedef struct dugum{
	int x;
	struct dugum *ptr;
}Dugum;
Dugum *daireselYap(Dugum *p)
{
	Dugum *sonptr = p;
	
	while(sonptr->ptr != NULL){
		sonptr = sonptr->ptr;
	}
	sonptr->ptr = p;
	return p;
}