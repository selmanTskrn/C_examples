#include <stdio.h>
#include <math.h>
typedef struct cember{
	int x;
	int y;
	int yaricap;
}Cember;
int isSoddy( Cember, Cember, Cember);
int main()
{
	Cember a, b, c;
	int k;
	
	printf("1. cemberin koordinatlari ve yapicapini giriniz : ");
	scanf("%d%d%d", &a.x, &a.y, &a.yaricap);
	printf("2. cemberin koordinatlari ve yapicapini giriniz : ");
	scanf("%d%d%d", &b.x, &b.y, &b.yaricap);
	printf("3. cemberin koordinatlari ve yapicapini giriniz : ");
	scanf("%d%d%d", &c.x, &c.y, &c.yaricap);
	
	k = isSoddy( a, b, c);
	if ( k )
		printf("Bu cemberler Soddy cemberleridir");
	else 
		printf("Bu cemberler Soddy cemberleri degildir");
	return 0;
}
int isSoddy( Cember a, Cember b, Cember c)
{
	if ( sqrt( pow((a.x - b.x), 2) + pow((a.y - b.y), 2)) == (a.yaricap + b.yaricap) ){
		if ( sqrt( pow((a.x - c.x), 2) + pow((a.y - c.y ), 2)) == (a.yaricap + c.yaricap) ){
			if ( sqrt( pow((b.x - c.x), 2) + pow((b.y - c.y ), 2)) == (b.yaricap + c.yaricap) )
				return 1;
		}
	}
	return 0;
}