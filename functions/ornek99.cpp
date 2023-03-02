#include <stdio.h>
#include <math.h>
void cerceve(int x1, int y1, int x2, int y2);

int main()
{
	int x1, y1, x2, y2;
	printf("x1,y1 ve x2,y2 degerlerini giriniz : ");
	scanf("%d%d%d%d", &x1, &y1, &x2, &y2);

	cerceve(x1,y1,x2,y2);
	return 0;
}
void cerceve(int x1, int y1, int x2, int y2)
{

	char a=187, b=188, c=200, d=201, e=205, f=186;
	printf("%c", d);
	for (int i=1 ; i<=fabs(x2-x1) ; i++){
		printf("%c", e);
	}
	printf("%c", a);
	for (int i=1 ; i<=fabs(y2-y1) ; i++){
		printf("\n%c", f);
		for(int j=1; j<=fabs(x2-x1); j++){
			printf(" ");
		}
		printf("%c", f);
	}
	printf("\n%c", c);
	for (int i=1 ; i<=fabs(x2-x1) ; i++){
		printf("%c", e);
	}
	printf("%c", b);
}
