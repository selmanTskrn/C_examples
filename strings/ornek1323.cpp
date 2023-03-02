#include <stdio.h>
#include <string.h>

int main()
{
	char misra[2][150];
	char *ptr1, *ptr2;
	char cd = ' ';
	
	puts("Misralari giriniz :");
	fgets(misra[0], 150, stdin);
	fgets(misra[1], 150, stdin);
	
	
	ptr1 = strchr(misra[0], ' ');
	ptr2 = strchr(misra[1], ' ');
	
	if ( strcmp(ptr1, ptr2) == 0)
		printf("Girilen misralarda cinasli kafiye vardir.");
	else
		printf("Girilen misralarda cinasli kafiye yoktur.");
	
	return 0;
}