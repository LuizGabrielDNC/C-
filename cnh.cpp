#include <stdio.h>
int main()
{
	int idade;
	
	printf("Informe sua idade : ");
	scanf("%d", &idade);
	fflush(stdin);
	if(idade>=18)
	{
		printf("Direito a pedido da sua cnh concedido");
	}
}
