#include <stdio.h>
#include <stdlib.h>
typedef struct dugum{
	char ch;
	struct dugum *ptr;
}Dugum;
void push(Dugum **, char );
void yazdir(Dugum *);
int main()
{
	Dugum *basptr = NULL;
	char cumle[50];
	
	printf("Klavyeden bir cumle giriniz : ");
	fgets(cumle,50,stdin);
	
	for(int i=0 ; cumle[i] != '\0' ; i++){
		push( &basptr, cumle[i]);
	}
	
	yazdir( basptr );
	
	return 0;
}
void push(Dugum **p, char harf)
{
	Dugum *yeniptr;
	
	yeniptr = (Dugum *)malloc(sizeof(Dugum));
	
	if(yeniptr != NULL){
		yeniptr->ch = harf;
		yeniptr->ptr = *p;
		*p = yeniptr;
	}
	else
		printf("Bellek dolu.\n");
}
void yazdir( Dugum *p)
{
	if(p == NULL)
		printf("Stack bos");
	else{
		while( p != NULL ){
			printf("%c", p->ch);
			p = p->ptr;
		}
	}
}