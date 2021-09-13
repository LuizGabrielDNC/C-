#include <stdio.h>
#include <math.h>
#include<stdlib.h>
#define pi 3.14//constante
int main(){
	float r;
	printf("digite o valor do raio : ");
	scanf("%f", &r);
	system("cls");
	printf("\n valor da area : %f", pi * pow(r, 2));
	printf("\n Valor do perimetro : %f", 2*pi * r);//processamento dentro do printf
}
