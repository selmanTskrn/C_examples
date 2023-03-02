#include <stdio.h>

struct zaman{
	int st;
	int dk;
	int sn;
};

void ekle(struct zaman *, int);

int main()
{
	struct zaman a = { 21, 58, 32};
	int i = 97;
	
	printf("Ilk hali : %02d:%02d:%02d\n", a.st, a.dk, a.sn);
	ekle( &a, i);
	printf("%d saniye eklenmis hali : %02d:%02d:%02d", i, a.st, a.dk, a.sn);
	
	return 0;
}
void ekle(struct zaman *ptr, int i)
{
	ptr->sn += i;
	if ( ptr->sn > 59 ){
		ptr->dk += (ptr->sn) / 60;
		ptr->sn = (ptr->sn) % 60;
		if ( ptr->dk > 59 ){
			ptr->st += (ptr->dk) / 60;
			ptr->dk = (ptr->dk) % 60;
		}
	}
	
}