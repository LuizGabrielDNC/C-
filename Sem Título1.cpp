#include<stdio.h>
int main()
{
	int idade, ano;
	float altura ;
	char nome[30];
	
	printf("\nDigite seu nome : ");
	scanf("%s",nome);
	printf("\nDigite a idade : ");
    scanf("%d",&idade);
    printf("\nDigite a sua altura  : ");
    scanf("%f", &altura);
    
    ano = 2020-idade;
    printf("\nO nome e : %s", nome);
    printf("\nSua altura e : %f", altura);
    printf("\nA idade e : %d",idade);
    printf("\nO ano de idade  : %d", ano);
	return(0);



}
