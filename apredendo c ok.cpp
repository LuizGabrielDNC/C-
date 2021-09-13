#include <stdio.h>
int main(){
	
	int		idade, ano;
	float	altura;
	char	nome[20];
	
	printf	("Digite seu nome: ");
	scanf	("%s", nome);
	printf	("Digite a idade :");
	scanf	("%d", &idade);
	printf	("Digite a altura :");
	scanf	("%f", &altura);
	
	ano = 2020 - idade ;
	
	printf	("\nO nome e :%s", nome);
	printf	("\nA idade e: %d", idade);
	printf	("\nA altura e : %.2f", altura);
	printf	("\nO ano de nascimento e: %d", ano);
	
}
