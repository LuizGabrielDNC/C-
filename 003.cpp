#include <stdio.h>
int main(){
	int idade, ano;
	float altura;
	char nome[30];
	
	printf("Digite seu nome : ");
	scanf("%s", nome);
	
	printf("Digite sua altura : ");
	scanf("%f", &altura);
	
	printf("Digite sua idade :");
	scanf("%d", &idade);
	
	ano = 2020 - idade;
	printf("\nA altura e : %.2f", altura);
	printf("\nO nome e :%s", nome);
	printf("\nA idade e :%d", idade);
	printf("\nO ano de nascimento e :%d", ano);


}
