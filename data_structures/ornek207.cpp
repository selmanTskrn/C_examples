#include <stdio.h>
#include <stdlib.h>
typedef struct dugum{
	int x;
	struct dugum *ptr;
}Dugum;
void daireyeEkle(Dugum **p, int x)
{
	Dugum *yeniptr, *sonptr;
	
	yeniptr = (Dugum *)malloc(sizeof(Dugum));
	
	if(yeniptr != NULL){
		yeniptr->x = x;
		yeniptr->ptr = NULL;
		
		sonptr = *p;
		
		while( sonptr->ptr != *p){
			sonptr = sonptr->ptr;
		}
		if(sonptr == *p){
			yeniptr->ptr = *p;
			*p = yeniptr;
		}
		else{
			sonptr->ptr = yeniptr;
			yeniptr->ptr = *p;
		}
	}
	else
		printf("Alan acilamadi\n");
}