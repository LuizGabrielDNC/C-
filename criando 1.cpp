#include <stdio.h>
#include <locale.h>
int main()
{
 	setlocale(LC_ALL, "Portuguese");
 	int senha;
	printf("Digite sua senha :");
	scanf("%d", &senha);
	if(senha==2019)
	{
		printf("Bom dia \n Sua conta esta com R$ 20.000,00 ");
	}
	if (senha != 2019)
	{
		printf("Sua senha está incorreta ");
	}
}
