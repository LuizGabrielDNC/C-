#include <stdio.h>

int main()
{
	float deposito, taxa , rendimento, total;
	
	printf("Informe o valor do deposito :");
	scanf("%f", &deposito);
	printf("\nInforme a taxa de juros :");
	scanf("%f", &taxa);
	rendimento=deposito * (taxa/100);
	total =deposito + rendimento;
	printf("\nO rendimento e : %.2f", rendimento);
	printf("\nO total e :%.2f", total);
}
