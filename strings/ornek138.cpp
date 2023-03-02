#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char denklem[20];
	int x, y;
	long m, n;
	char *ptr;
	
	printf("Dogru denklemini giriniz : y=");
	scanf("%s", denklem);
	
	printf("X degerini giriniz : ");
	scanf("%d", &x);

	ptr = strtok(denklem, "+");
	sscanf(ptr, "%ld", &m);
	ptr = strtok(NULL, "+");
	sscanf(ptr, "%ld", &n);
	y = m*x + n;
	
	printf("------------------------\ny = %d", y);
	return 0;
}