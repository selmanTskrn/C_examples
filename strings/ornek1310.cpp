#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char s[100];
	char s1[10];
	char s2[10];
	char k;
	long j;
	double l;
	char *ptr1, *ptr2;
	
	puts("Sorunuzu giriniz : ");
	fgets(s, 100, stdin);
	
	j = strtol( s, &ptr1, 10);
	ptr2 = strtok( ptr1, " ");
	switch (*ptr1){
		case 'km':
			l = j/1000;
			break;
		case 'm':
			l = j;
			break;
		case 'cm':
			l = j*100;
			break;
		case 'mm':
			l = j*1000;
			break;
	}
	printf("%d%s, %.2f%s dir", j, *ptr1, l, *ptr1);
	return 0;
}