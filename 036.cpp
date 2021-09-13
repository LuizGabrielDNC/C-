#include <stdio.h>
int main()
{
	int idade, npessoas;
	float altura, somaa, somai;
	char sexo;
	somaa= 0;
	somai=0;
	npessoas=0;
	printf("informe a idade : \n");
	scanf("%d", &idade);
	while (idade !=0)
	{
		printf("informe a altura :\n");
		scanf("%f", &altura);
		npessoas++;
		somai = somai + idade;
		somaa= somaa+altura;
		printf("Informe a idade : \n");
		scanf("%d", &idade);
	}
	printf("A media de altura e : %.2f\n", somaa/npessoas);
	printf("A media de idade e : %.2f\n", somai/npessoas);
	return(0);
}
	
