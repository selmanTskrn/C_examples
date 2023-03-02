//hesap makinesi
#include <stdio.h>
#include <math.h>

void veri_al( char *, int *);

void islem_yap( float *, char *, int *);

int main()
{
	char operate;
	float depo = 0;
	int operand;
	
	printf("Operator ve operandi giriniz : \n");
	
	do {
		veri_al( &operate, &operand);
		islem_yap( &depo, &operate, &operand);
	} while ( operate != 'q');
	return 0;
}
void veri_al( char *operatep, int *operandp)
{
	scanf(" %c", operatep);
	scanf("%d", operandp);
}
void islem_yap( float *depop, char *operatep, int *operandp)
{

	switch (*operatep){
		case '+':
			*depop += *operandp;
			printf("Sonuc : %.2f\n", *depop);
			break;
		case '-':
			*depop -= *operandp;
			printf("Sonuc : %.2f\n", *depop);
			break;
		case '^':
			*depop = pow(*depop, *operandp);
			printf("Sonuc : %.2f\n", *depop);
			break;
		case '*':
			*depop *= *operandp;
			printf("Sonuc : %.2f\n", *depop);
			break;
		case '/':
			*depop /= *operandp;
			printf("Sonuc : %.2f\n", *depop);
			break;
		case 'm':
			*depop = fmod(*depop, *operandp);
			printf("Sonuc : %.2f\n", *depop);
			break;
		case 'q':
			break;
		default:
			printf("Hata!! Yanlis operator girdiniz");
			break;
	}
}