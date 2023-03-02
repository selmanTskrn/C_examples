#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	char s1[20];
	char s2[20];
	char *ptr;
	int zaman, zaman1 = 0, zaman2 = 0;
	
	printf("Birinci zamani giriniz: ");
	scanf("%s", s1);
	
	ptr = strtok( s1, ":");
	zaman1 += (3600 * atoi(ptr));
	ptr = strtok( NULL, ":");
	zaman1 += (60 * atoi(ptr));
	ptr = strtok(NULL, ":");
	zaman1 += atoi(ptr);
	
	printf("Ikinci zamani giriniz: ");
	scanf("%s", s2);
	
	ptr = strtok( s2, ":");
	zaman2 += (3600 * atoi(ptr));
	ptr = strtok( NULL, ":");
	zaman2 += (60 * atoi(ptr));
	ptr = strtok(NULL, ":");
	zaman2 += atoi(ptr);
	
	zaman = fabs(zaman1 - zaman2);
	
	printf("-------------------\n"
	"Aradaki fark : %d saniyedir", zaman);
	return 0;
}	