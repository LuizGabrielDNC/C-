#include <stdio.h>

int main(){
	float base1, base2, altura, area;
	
	printf(" INFORME O VALOR DA BASE MAIOR : ");
	scanf("%f", &base1);
	printf("\niNFORME A BASE MENOR : ");
	scanf("%f", &base2);
	printf("\nINFORME O VALOR DA ALTURA : ");
	scanf("%f", &altura);
	area = ((base1 + base2) * altura )/2;
	printf("A area do trapezio e : %.2f", area);
	return (0);
}
